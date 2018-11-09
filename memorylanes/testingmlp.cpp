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
  std::default_random_engine engine;
  for (size_t i = 0; i + 1 < length; i++) {
    std::uniform_int_distribution<size_t> dist{i + 1, length - 1};
    size_t swapidx = dist(engine);
    std::swap(bigarray[i], bigarray[swapidx]);
  }

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
