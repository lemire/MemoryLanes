#include "common.hpp"

#include <random>


extern "C" {
int measure(size_t length, char * result) {
  uint64_t *bigarray = (uint64_t *)malloc(sizeof(uint64_t) * length);

  // create a cycle of maximum length within the bigarray
  for (size_t i = 0; i < length; i++) {
    bigarray[i] = i;
  }
  // Sattolo
  std::mt19937_64 engine;
  engine.seed(0xBABE);
  for (size_t i = NAKED_MAX + 1; i + 1 < length; i++) {
    std::uniform_int_distribution<size_t> dist{i + 1, length - 1};
    size_t swapidx = dist(engine);
    std::swap(bigarray[i], bigarray[swapidx]);
  }
  size_t current_start = 1;
  uint64_t current_pointer = NAKED_MAX + 1;//  arbitrary
  uint64_t a = bigarray[current_pointer];
  uint64_t b = bigarray[a];
  bigarray[a] = current_start;
  bigarray[current_start] = b;
  current_pointer = current_start;
  current_start++;
  size_t targetdist = (length - NAKED_MAX - 1 - 1) / NAKED_MAX;
  size_t cdist = 0;
  while(current_start <= NAKED_MAX) {
        cdist = 0;
        while(cdist < targetdist) {
            current_pointer = bigarray[current_pointer];
            cdist++;
        }
        a = current_pointer;
        b = bigarray[a];
        bigarray[a] = current_start;
        bigarray[current_start] = b;
        current_pointer = current_start;
        current_start++;
  }
  // next, we check how close the neighbors are
  // 1, 2, ... NAKED_MAX
  size_t mindist = length;
  size_t currentdist = 0;
  uint64_t target = 1;
  do {
        target = bigarray[target];
        currentdist ++;
        if((target > 0) && (target < NAKED_MAX)) {
            if(mindist > currentdist) mindist = currentdist;
            currentdist = 0;
        }
  } while (target != 1);
  result+= sprintf(result, "mindist = %zu vs %zu \n", mindist, (size_t) (length/NAKED_MAX));

  float time_measure[NAKED_MAX];
  size_t howmanyhits = 1 * 4 * 5 * 6 * 7 * 8 * 9 * 11 * 13;
  int repeat = 5;

  naked_measure_body(time_measure, bigarray, howmanyhits, repeat);
  for (size_t i = 1; i < NAKED_MAX; i++) {
        result+= sprintf(result, "%zu %f\n", i, time_measure[i]);
  }
  for (size_t i = 2; i < NAKED_MAX; i++) {

    float ratio = (time_measure[i - 1] - time_measure[i]) / time_measure[i - 1];

    if (ratio <
        0.01) // if a new lane does not add at least 1% of performance...
    {
        result+= sprintf(result, "Maybe you have about %zu  parallel paths? \n", i - 1);
      return (int) (i - 1);
    }
  }
  return 10000;
}
}
