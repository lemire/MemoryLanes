#include <inttypes.h>
#include <stdlib.h>
#include <iostream>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>

/* max MLP value tested with the naked strategy */
constexpr int NAKED_MAX = 100;

/* if true, try the pure pointer chasing strategy */
constexpr int DO_NAKED = true;

#define ELEM_SIZE 64

struct Line {
  uint64_t idx;
  char filler[ELEM_SIZE - sizeof(Line*)];
};

void naked_measure_body(float (&time_measure)[NAKED_MAX], Line *bigarray, size_t howmanyhits, size_t repeat);

typedef uint64_t (access_method_f)(Line *bigarray, size_t howmanyhits);

float time_one(Line *bigarray, size_t howmanyhits, size_t repeat, access_method_f *method, size_t lanes, float firsttime, float lasttime);
