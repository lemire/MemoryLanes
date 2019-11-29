#include "common.hpp"

#include <assert.h>
#include <string.h>
#include <random>
#include <chrono>

int getenv_int(const char *var, int def) {
    const char *val = getenv(var);
    return val ? atoi(val) : def;
}

bool getenv_bool(const char *var) {
    const char *val = getenv(var);
    return val && strcmp(val, "1") == 0;
}

const int do_csv       = getenv_int("MLP_CSV", 0);
const size_t len_start = getenv_int("MLP_START", 1) * 1024ull; // 1 KiB
const size_t len_end   = getenv_int("MLP_STOP", 32 * 1024) * 1024ull; // 256 MiB


FILE* ifile = do_csv ? stderr : stdout;

#define printi(...) fprintf(ifile, __VA_ARGS__)

float time_one(const uint64_t* sp,
               const uint64_t *bigarray,
               size_t howmanyhits,
               size_t repeat,
               access_method_f *method,
               size_t lanes,
               float firsttime,
               float lasttime) {
  using namespace std::chrono;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  for (size_t r = 0; r < repeat; r++) {
    auto begin_time = high_resolution_clock::now();
    bogus += method(sp, bigarray, howmanyhits);
    auto end_time = high_resolution_clock::now();
    float tv = duration<float>(end_time - begin_time).count();
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  // compute the bandwidth
  size_t cachelineinbytes = 64;
  size_t rounded_hits = ( howmanyhits / lanes * lanes );
  size_t volume = rounded_hits * cachelineinbytes;
  double mbpers = volume / mintime / (1024.0 * 1024.);
  double nanoperquery = 1000 * 1000 *  1000 * mintime / rounded_hits;
  double expected = lasttime * (lanes - 1) / lanes;  // expected time if at max efficiency
  double efficiency = lanes == 1 ? 0 : 100.0 * (lasttime - mintime) / (lasttime - expected);
  double speedup = lanes == 1 ? 1 : firsttime / mintime;
  if (do_csv) {
    // printf("%zu,%f,%.0f,%.1f,%.0f%%,%.3f\n",
    //   lanes, mintime, round(mbpers), nanoperquery, efficiency, speedup);
    switch (do_csv) {
      case 1: printf(",%.1f", mbpers); break;
      case 2: printf(",%.3f", speedup); break;
      default: assert(false);
    }
  } else {
    printf("%12zu %12f %10.0f  %8.1f  %6.0f%%  %9.1f\n",
      lanes, mintime, round(mbpers), nanoperquery, efficiency, speedup);
  }
  return mintime;
}

/* advance starting at p, n times */
size_t incr(const uint64_t* array, uint64_t p, size_t n) {
  while (n--) {
    p = array[p];
  }
  return p;
}

size_t cycle_dist(const uint64_t* array, uint64_t from, uint64_t to) {
  size_t dist = 0;
  while (from != to) {
    from = array[from];
    dist++;
  }
  return dist;
}

size_t cycle_total(const uint64_t* array) {
  auto first = array[0];
  return 1 + cycle_dist(array, first, 0);
}

uint64_t *init_array(size_t length, size_t max_mlp) {
  printi("Initializing array made of %zu 64-bit words (%5.2f MiB).\n", length, length * 8. / 1024. / 1024.);
  uint64_t *bigarray = (uint64_t *)malloc(sizeof(uint64_t) * length);
  return bigarray;
}

/** make a cycle of length starting at element 0 of the given array */
void make_cycle(uint64_t* array, size_t length) {
// create a cycle of maximum length within the bigarray
  for (size_t i = 0; i < length; i++) {
    array[i] = i;
  }
  printi("Applying Sattolo's algorithm... ");
  fflush(ifile);
  // Sattolo
  std::mt19937_64 engine;
  engine.seed(0xBABE);
  for (size_t i = 0; i + 1 < length; i++) {
    std::uniform_int_distribution<size_t> dist{i + 1, length - 1};
    size_t swapidx = dist(engine);
    std::swap(array[i], array[swapidx]);
  }
  printi("chain total: %zu\n", cycle_total(array));
}

int naked_measure(uint64_t* bigarray, size_t length, size_t max_mlp) {

  make_cycle(bigarray, length);

  printi("Surgery on the long cycle. \n");
  uint64_t starting_pointers[NAKED_MAX] = {};
  starting_pointers[0] = 0;
  for (size_t sp = 1; sp < NAKED_MAX; sp++) {
    starting_pointers[sp] = incr(bigarray, starting_pointers[sp - 1], length / NAKED_MAX);
  }

  printi("Verifying the neighboring distance... \n");
  size_t mind = -1, maxd = 0;
  for (size_t i = 1; i < max_mlp; i++) {
    uint64_t from = starting_pointers[i];
    uint64_t to   = starting_pointers[i + 1];
    size_t dist = cycle_dist(bigarray, from, to);
    mind = std::min(mind, dist);
    maxd = std::max(maxd, dist);
  }
  printi("inter-chain dists: ideal=%zu, min=%zu, max=%zu\n", length / max_mlp, mind, maxd);
  uint64_t sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
  clock_t begin_time, end_time;
  int sumrepeat = 10;
  float mintime = 99999999999;
  while (sumrepeat-- >0) {
    begin_time = clock();
    for(size_t i = 0; i < length - 3 * 8; i+= 32) {
      sum1 ^= bigarray[i];
      sum2 ^= bigarray[i + 8];
      sum3 ^= bigarray[i + 16];
      sum4 ^= bigarray[i + 24];
    }
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if((sum1 ^ sum2 ^ sum3 ^ sum4) == 0x1010) printf("bug");
  printi("Time to sum up the array (linear scan) %.3f s (x 8 = %.3f s), bandwidth = %.1f MB/s \n",mintime,8*mintime, length * sizeof(uint64_t) / mintime / (1024.0 * 1024.0));

  float time_measure[NAKED_MAX] = {};
  size_t howmanyhits = length; //1 * 4 * 5 * 6 * 7 * 8 * 9 * 11 * 13 * 17;
  int repeat = 5;
  if (do_csv) {
    // printf("lanes,time,bw,ns/hit,eff,speedup\n");
    printf("%zu", length);
  } else {
    printi("Size: %zu (%5.2f KiB, %5.2f MiB)\n", length, length * 8. / 1024., length * 8. / 1024. / 1024.);
    printi("---------------------------------------------------------------------\n");
    printi("- # of lanes --- time (s) ---- BandW -- ns/hit -- %% Eff -- Speedup --\n");
    printi("---------------------------------------------------------------------\n");
  }

  // naked_measure_body(time_measure, bigarray, howmanyhits, repeat);
  for (size_t m = 1; m <= max_mlp; m++) {
    time_measure[m] = time_one(starting_pointers, bigarray, howmanyhits, repeat, get_method(m), m, time_measure[1], time_measure[m - 1]);
  }

  if (do_csv) {
    printf("\n");
  } else {
    for (size_t i = 2; i < NAKED_MAX; i++) {
      float ratio = (time_measure[i - 1] - time_measure[i]) / time_measure[i - 1];

      if (ratio < 0.01) // if a new lane does not add at least 1% of performance...
      {
        std::cout << "Maybe you have about " << i - 1 << " parallel paths? "
                  << std::endl;
        return i - 1;
        break;
      }
    }
  }

  printi("--------------------------------------------------------------\n");
  return 10000;
}

int main() {
  assert(do_csv >= 0 && do_csv <= 2);
  printi("CLOCKS_PER_SEC: %zu\n", (size_t)CLOCKS_PER_SEC);
  size_t max_mlp = getenv_int("MLP_MAX_MLP", 30);
  auto array = init_array(len_end, max_mlp);

  if (!do_csv) {
    printi("Legend:\n"
        "  BandW: Implied bandwidth (assuming 64-byte cache line) in MB/s\n"
        "  %% Eff: Effectiness of this lane count compared to the prior, as a %% of ideal\n"
        "  Speedup: Speedup factor for this many lanes versus one lane\n"
    );
  } else {
    printf("size,");
    for (size_t m = 1; m <= max_mlp; m++) {
      printf("%zu%s", m, m == max_mlp ? "\n" : ",");
    }
  }

  // for (size_t length = len_start; length <= len_end; length *= 2) {
  for (int i = 0; ; i++) {
    size_t length = round(len_start * pow(2., i / 4.));
    if (length > len_end)
      break;
    naked_measure(array, length, max_mlp);
  }
}
