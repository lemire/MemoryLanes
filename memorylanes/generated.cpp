#include "common.hpp"

uint64_t naked_access_1(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
size_t howmanyhits_perlane = howmanyhits / 1;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
}
return  val1  ;
}


float time_me1(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_1(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 1 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_2(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
size_t howmanyhits_perlane = howmanyhits / 2;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
}
return  val1 + val2  ;
}


float time_me2(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_2(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 2 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_3(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
size_t howmanyhits_perlane = howmanyhits / 3;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
}
return  val1 + val2 + val3  ;
}


float time_me3(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_3(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 3 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_4(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
size_t howmanyhits_perlane = howmanyhits / 4;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
}
return  val1 + val2 + val3 + val4  ;
}


float time_me4(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_4(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 4 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_5(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
size_t howmanyhits_perlane = howmanyhits / 5;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
}
return  val1 + val2 + val3 + val4 + val5  ;
}


float time_me5(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_5(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 5 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_6(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
size_t howmanyhits_perlane = howmanyhits / 6;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
}
return  val1 + val2 + val3 + val4 + val5 + val6  ;
}


float time_me6(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_6(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 6 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_7(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
size_t howmanyhits_perlane = howmanyhits / 7;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7  ;
}


float time_me7(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_7(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 7 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_8(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
size_t howmanyhits_perlane = howmanyhits / 8;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8  ;
}


float time_me8(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_8(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 8 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_9(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
size_t howmanyhits_perlane = howmanyhits / 9;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9  ;
}


float time_me9(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_9(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 9 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_10(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
size_t howmanyhits_perlane = howmanyhits / 10;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10  ;
}


float time_me10(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_10(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 10 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_11(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
size_t howmanyhits_perlane = howmanyhits / 11;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11  ;
}


float time_me11(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_11(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 11 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_12(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
size_t howmanyhits_perlane = howmanyhits / 12;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12  ;
}


float time_me12(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_12(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 12 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_13(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
size_t howmanyhits_perlane = howmanyhits / 13;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13  ;
}


float time_me13(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_13(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 13 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_14(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
size_t howmanyhits_perlane = howmanyhits / 14;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14  ;
}


float time_me14(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_14(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 14 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_15(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
size_t howmanyhits_perlane = howmanyhits / 15;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15  ;
}


float time_me15(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_15(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 15 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_16(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
size_t howmanyhits_perlane = howmanyhits / 16;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16  ;
}


float time_me16(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_16(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 16 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_17(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
size_t howmanyhits_perlane = howmanyhits / 17;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17  ;
}


float time_me17(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_17(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 17 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_18(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
size_t howmanyhits_perlane = howmanyhits / 18;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18  ;
}


float time_me18(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_18(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 18 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_19(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
size_t howmanyhits_perlane = howmanyhits / 19;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19  ;
}


float time_me19(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_19(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 19 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_20(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
size_t howmanyhits_perlane = howmanyhits / 20;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20  ;
}


float time_me20(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_20(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 20 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_21(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
size_t howmanyhits_perlane = howmanyhits / 21;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21  ;
}


float time_me21(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_21(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 21 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_22(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
size_t howmanyhits_perlane = howmanyhits / 22;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22  ;
}


float time_me22(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_22(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 22 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_23(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
size_t howmanyhits_perlane = howmanyhits / 23;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23  ;
}


float time_me23(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_23(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 23 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_24(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
size_t howmanyhits_perlane = howmanyhits / 24;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24  ;
}


float time_me24(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_24(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 24 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_25(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
size_t howmanyhits_perlane = howmanyhits / 25;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25  ;
}


float time_me25(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_25(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 25 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_26(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
size_t howmanyhits_perlane = howmanyhits / 26;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26  ;
}


float time_me26(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_26(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 26 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_27(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
size_t howmanyhits_perlane = howmanyhits / 27;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27  ;
}


float time_me27(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_27(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 27 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_28(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
size_t howmanyhits_perlane = howmanyhits / 28;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28  ;
}


float time_me28(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_28(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 28 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_29(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
size_t howmanyhits_perlane = howmanyhits / 29;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29  ;
}


float time_me29(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_29(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 29 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_30(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
size_t howmanyhits_perlane = howmanyhits / 30;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30  ;
}


float time_me30(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_30(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 30 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_31(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
size_t howmanyhits_perlane = howmanyhits / 31;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31  ;
}


float time_me31(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_31(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 31 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_32(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
size_t howmanyhits_perlane = howmanyhits / 32;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32  ;
}


float time_me32(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_32(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 32 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_33(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
size_t howmanyhits_perlane = howmanyhits / 33;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33  ;
}


float time_me33(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_33(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 33 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_34(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
size_t howmanyhits_perlane = howmanyhits / 34;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34  ;
}


float time_me34(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_34(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 34 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_35(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
size_t howmanyhits_perlane = howmanyhits / 35;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35  ;
}


float time_me35(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_35(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 35 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_36(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
size_t howmanyhits_perlane = howmanyhits / 36;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36  ;
}


float time_me36(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_36(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 36 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_37(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
size_t howmanyhits_perlane = howmanyhits / 37;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37  ;
}


float time_me37(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_37(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 37 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_38(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
size_t howmanyhits_perlane = howmanyhits / 38;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38  ;
}


float time_me38(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_38(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 38 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_39(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
size_t howmanyhits_perlane = howmanyhits / 39;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39  ;
}


float time_me39(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_39(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 39 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_40(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
size_t howmanyhits_perlane = howmanyhits / 40;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40  ;
}


float time_me40(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_40(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 40 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_41(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
size_t howmanyhits_perlane = howmanyhits / 41;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41  ;
}


float time_me41(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_41(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 41 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_42(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
size_t howmanyhits_perlane = howmanyhits / 42;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42  ;
}


float time_me42(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_42(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 42 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_43(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
size_t howmanyhits_perlane = howmanyhits / 43;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43  ;
}


float time_me43(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_43(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 43 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_44(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
size_t howmanyhits_perlane = howmanyhits / 44;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44  ;
}


float time_me44(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_44(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 44 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_45(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
size_t howmanyhits_perlane = howmanyhits / 45;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45  ;
}


float time_me45(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_45(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 45 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_46(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
size_t howmanyhits_perlane = howmanyhits / 46;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46  ;
}


float time_me46(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_46(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 46 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_47(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
size_t howmanyhits_perlane = howmanyhits / 47;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47  ;
}


float time_me47(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_47(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 47 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_48(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
size_t howmanyhits_perlane = howmanyhits / 48;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48  ;
}


float time_me48(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_48(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 48 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_49(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
size_t howmanyhits_perlane = howmanyhits / 49;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49  ;
}


float time_me49(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_49(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 49 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_50(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
size_t howmanyhits_perlane = howmanyhits / 50;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50  ;
}


float time_me50(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_50(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 50 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_51(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
size_t howmanyhits_perlane = howmanyhits / 51;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51  ;
}


float time_me51(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_51(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 51 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_52(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
size_t howmanyhits_perlane = howmanyhits / 52;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52  ;
}


float time_me52(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_52(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 52 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_53(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
size_t howmanyhits_perlane = howmanyhits / 53;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53  ;
}


float time_me53(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_53(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 53 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_54(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
size_t howmanyhits_perlane = howmanyhits / 54;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54  ;
}


float time_me54(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_54(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 54 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_55(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
size_t howmanyhits_perlane = howmanyhits / 55;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55  ;
}


float time_me55(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_55(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 55 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_56(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
size_t howmanyhits_perlane = howmanyhits / 56;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56  ;
}


float time_me56(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_56(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 56 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_57(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
size_t howmanyhits_perlane = howmanyhits / 57;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57  ;
}


float time_me57(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_57(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 57 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_58(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
size_t howmanyhits_perlane = howmanyhits / 58;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58  ;
}


float time_me58(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_58(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 58 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_59(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
size_t howmanyhits_perlane = howmanyhits / 59;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59  ;
}


float time_me59(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_59(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 59 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_60(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
size_t howmanyhits_perlane = howmanyhits / 60;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60  ;
}


float time_me60(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_60(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 60 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_61(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
size_t howmanyhits_perlane = howmanyhits / 61;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61  ;
}


float time_me61(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_61(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 61 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_62(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
size_t howmanyhits_perlane = howmanyhits / 62;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62  ;
}


float time_me62(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_62(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 62 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_63(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
size_t howmanyhits_perlane = howmanyhits / 63;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63  ;
}


float time_me63(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_63(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 63 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_64(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
size_t howmanyhits_perlane = howmanyhits / 64;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64  ;
}


float time_me64(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_64(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 64 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_65(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
size_t howmanyhits_perlane = howmanyhits / 65;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65  ;
}


float time_me65(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_65(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 65 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_66(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
size_t howmanyhits_perlane = howmanyhits / 66;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66  ;
}


float time_me66(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_66(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 66 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_67(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
size_t howmanyhits_perlane = howmanyhits / 67;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67  ;
}


float time_me67(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_67(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 67 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_68(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
size_t howmanyhits_perlane = howmanyhits / 68;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68  ;
}


float time_me68(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_68(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 68 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_69(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
size_t howmanyhits_perlane = howmanyhits / 69;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69  ;
}


float time_me69(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_69(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 69 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_70(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
size_t howmanyhits_perlane = howmanyhits / 70;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70  ;
}


float time_me70(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_70(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 70 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_71(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
size_t howmanyhits_perlane = howmanyhits / 71;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71  ;
}


float time_me71(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_71(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 71 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_72(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
size_t howmanyhits_perlane = howmanyhits / 72;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72  ;
}


float time_me72(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_72(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 72 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_73(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
size_t howmanyhits_perlane = howmanyhits / 73;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73  ;
}


float time_me73(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_73(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 73 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_74(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
size_t howmanyhits_perlane = howmanyhits / 74;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74  ;
}


float time_me74(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_74(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 74 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_75(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
size_t howmanyhits_perlane = howmanyhits / 75;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75  ;
}


float time_me75(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_75(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 75 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_76(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
size_t howmanyhits_perlane = howmanyhits / 76;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76  ;
}


float time_me76(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_76(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 76 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_77(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
size_t howmanyhits_perlane = howmanyhits / 77;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77  ;
}


float time_me77(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_77(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 77 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_78(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
size_t howmanyhits_perlane = howmanyhits / 78;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78  ;
}


float time_me78(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_78(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 78 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_79(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
size_t howmanyhits_perlane = howmanyhits / 79;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79  ;
}


float time_me79(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_79(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 79 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_80(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
size_t howmanyhits_perlane = howmanyhits / 80;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80  ;
}


float time_me80(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_80(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 80 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_81(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
size_t howmanyhits_perlane = howmanyhits / 81;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81  ;
}


float time_me81(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_81(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 81 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_82(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
size_t howmanyhits_perlane = howmanyhits / 82;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82  ;
}


float time_me82(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_82(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 82 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_83(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
size_t howmanyhits_perlane = howmanyhits / 83;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83  ;
}


float time_me83(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_83(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 83 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_84(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
size_t howmanyhits_perlane = howmanyhits / 84;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84  ;
}


float time_me84(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_84(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 84 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_85(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
size_t howmanyhits_perlane = howmanyhits / 85;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85  ;
}


float time_me85(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_85(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 85 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_86(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
size_t howmanyhits_perlane = howmanyhits / 86;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86  ;
}


float time_me86(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_86(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 86 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_87(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
size_t howmanyhits_perlane = howmanyhits / 87;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87  ;
}


float time_me87(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_87(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 87 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_88(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
size_t howmanyhits_perlane = howmanyhits / 88;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88  ;
}


float time_me88(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_88(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 88 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_89(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
size_t howmanyhits_perlane = howmanyhits / 89;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89  ;
}


float time_me89(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_89(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 89 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_90(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
size_t howmanyhits_perlane = howmanyhits / 90;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90  ;
}


float time_me90(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_90(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 90 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_91(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
size_t howmanyhits_perlane = howmanyhits / 91;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91  ;
}


float time_me91(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_91(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 91 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_92(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
size_t howmanyhits_perlane = howmanyhits / 92;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92  ;
}


float time_me92(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_92(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 92 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_93(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
size_t howmanyhits_perlane = howmanyhits / 93;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93  ;
}


float time_me93(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_93(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 93 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_94(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
size_t howmanyhits_perlane = howmanyhits / 94;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94  ;
}


float time_me94(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_94(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 94 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_95(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
uint64_t val95 = 95;
size_t howmanyhits_perlane = howmanyhits / 95;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
val95 = bigarray[val95];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94 + val95  ;
}


float time_me95(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_95(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 95 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_96(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
uint64_t val95 = 95;
uint64_t val96 = 96;
size_t howmanyhits_perlane = howmanyhits / 96;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
val95 = bigarray[val95];
val96 = bigarray[val96];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94 + val95 + val96  ;
}


float time_me96(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_96(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 96 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_97(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
uint64_t val95 = 95;
uint64_t val96 = 96;
uint64_t val97 = 97;
size_t howmanyhits_perlane = howmanyhits / 97;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
val95 = bigarray[val95];
val96 = bigarray[val96];
val97 = bigarray[val97];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94 + val95 + val96 + val97  ;
}


float time_me97(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_97(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 97 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_98(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
uint64_t val95 = 95;
uint64_t val96 = 96;
uint64_t val97 = 97;
uint64_t val98 = 98;
size_t howmanyhits_perlane = howmanyhits / 98;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
val95 = bigarray[val95];
val96 = bigarray[val96];
val97 = bigarray[val97];
val98 = bigarray[val98];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94 + val95 + val96 + val97 + val98  ;
}


float time_me98(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_98(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 98 << " " << mintime << std::endl;
  return mintime;
}

uint64_t naked_access_99(uint64_t *bigarray, size_t howmanyhits) {
uint64_t val1 = 1;
uint64_t val2 = 2;
uint64_t val3 = 3;
uint64_t val4 = 4;
uint64_t val5 = 5;
uint64_t val6 = 6;
uint64_t val7 = 7;
uint64_t val8 = 8;
uint64_t val9 = 9;
uint64_t val10 = 10;
uint64_t val11 = 11;
uint64_t val12 = 12;
uint64_t val13 = 13;
uint64_t val14 = 14;
uint64_t val15 = 15;
uint64_t val16 = 16;
uint64_t val17 = 17;
uint64_t val18 = 18;
uint64_t val19 = 19;
uint64_t val20 = 20;
uint64_t val21 = 21;
uint64_t val22 = 22;
uint64_t val23 = 23;
uint64_t val24 = 24;
uint64_t val25 = 25;
uint64_t val26 = 26;
uint64_t val27 = 27;
uint64_t val28 = 28;
uint64_t val29 = 29;
uint64_t val30 = 30;
uint64_t val31 = 31;
uint64_t val32 = 32;
uint64_t val33 = 33;
uint64_t val34 = 34;
uint64_t val35 = 35;
uint64_t val36 = 36;
uint64_t val37 = 37;
uint64_t val38 = 38;
uint64_t val39 = 39;
uint64_t val40 = 40;
uint64_t val41 = 41;
uint64_t val42 = 42;
uint64_t val43 = 43;
uint64_t val44 = 44;
uint64_t val45 = 45;
uint64_t val46 = 46;
uint64_t val47 = 47;
uint64_t val48 = 48;
uint64_t val49 = 49;
uint64_t val50 = 50;
uint64_t val51 = 51;
uint64_t val52 = 52;
uint64_t val53 = 53;
uint64_t val54 = 54;
uint64_t val55 = 55;
uint64_t val56 = 56;
uint64_t val57 = 57;
uint64_t val58 = 58;
uint64_t val59 = 59;
uint64_t val60 = 60;
uint64_t val61 = 61;
uint64_t val62 = 62;
uint64_t val63 = 63;
uint64_t val64 = 64;
uint64_t val65 = 65;
uint64_t val66 = 66;
uint64_t val67 = 67;
uint64_t val68 = 68;
uint64_t val69 = 69;
uint64_t val70 = 70;
uint64_t val71 = 71;
uint64_t val72 = 72;
uint64_t val73 = 73;
uint64_t val74 = 74;
uint64_t val75 = 75;
uint64_t val76 = 76;
uint64_t val77 = 77;
uint64_t val78 = 78;
uint64_t val79 = 79;
uint64_t val80 = 80;
uint64_t val81 = 81;
uint64_t val82 = 82;
uint64_t val83 = 83;
uint64_t val84 = 84;
uint64_t val85 = 85;
uint64_t val86 = 86;
uint64_t val87 = 87;
uint64_t val88 = 88;
uint64_t val89 = 89;
uint64_t val90 = 90;
uint64_t val91 = 91;
uint64_t val92 = 92;
uint64_t val93 = 93;
uint64_t val94 = 94;
uint64_t val95 = 95;
uint64_t val96 = 96;
uint64_t val97 = 97;
uint64_t val98 = 98;
uint64_t val99 = 99;
size_t howmanyhits_perlane = howmanyhits / 99;
for (size_t counter = 0; counter < howmanyhits_perlane; counter++) {
val1 = bigarray[val1];
val2 = bigarray[val2];
val3 = bigarray[val3];
val4 = bigarray[val4];
val5 = bigarray[val5];
val6 = bigarray[val6];
val7 = bigarray[val7];
val8 = bigarray[val8];
val9 = bigarray[val9];
val10 = bigarray[val10];
val11 = bigarray[val11];
val12 = bigarray[val12];
val13 = bigarray[val13];
val14 = bigarray[val14];
val15 = bigarray[val15];
val16 = bigarray[val16];
val17 = bigarray[val17];
val18 = bigarray[val18];
val19 = bigarray[val19];
val20 = bigarray[val20];
val21 = bigarray[val21];
val22 = bigarray[val22];
val23 = bigarray[val23];
val24 = bigarray[val24];
val25 = bigarray[val25];
val26 = bigarray[val26];
val27 = bigarray[val27];
val28 = bigarray[val28];
val29 = bigarray[val29];
val30 = bigarray[val30];
val31 = bigarray[val31];
val32 = bigarray[val32];
val33 = bigarray[val33];
val34 = bigarray[val34];
val35 = bigarray[val35];
val36 = bigarray[val36];
val37 = bigarray[val37];
val38 = bigarray[val38];
val39 = bigarray[val39];
val40 = bigarray[val40];
val41 = bigarray[val41];
val42 = bigarray[val42];
val43 = bigarray[val43];
val44 = bigarray[val44];
val45 = bigarray[val45];
val46 = bigarray[val46];
val47 = bigarray[val47];
val48 = bigarray[val48];
val49 = bigarray[val49];
val50 = bigarray[val50];
val51 = bigarray[val51];
val52 = bigarray[val52];
val53 = bigarray[val53];
val54 = bigarray[val54];
val55 = bigarray[val55];
val56 = bigarray[val56];
val57 = bigarray[val57];
val58 = bigarray[val58];
val59 = bigarray[val59];
val60 = bigarray[val60];
val61 = bigarray[val61];
val62 = bigarray[val62];
val63 = bigarray[val63];
val64 = bigarray[val64];
val65 = bigarray[val65];
val66 = bigarray[val66];
val67 = bigarray[val67];
val68 = bigarray[val68];
val69 = bigarray[val69];
val70 = bigarray[val70];
val71 = bigarray[val71];
val72 = bigarray[val72];
val73 = bigarray[val73];
val74 = bigarray[val74];
val75 = bigarray[val75];
val76 = bigarray[val76];
val77 = bigarray[val77];
val78 = bigarray[val78];
val79 = bigarray[val79];
val80 = bigarray[val80];
val81 = bigarray[val81];
val82 = bigarray[val82];
val83 = bigarray[val83];
val84 = bigarray[val84];
val85 = bigarray[val85];
val86 = bigarray[val86];
val87 = bigarray[val87];
val88 = bigarray[val88];
val89 = bigarray[val89];
val90 = bigarray[val90];
val91 = bigarray[val91];
val92 = bigarray[val92];
val93 = bigarray[val93];
val94 = bigarray[val94];
val95 = bigarray[val95];
val96 = bigarray[val96];
val97 = bigarray[val97];
val98 = bigarray[val98];
val99 = bigarray[val99];
}
return  val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9 + val10 + val11 + val12 + val13 + val14 + val15 + val16 + val17 + val18 + val19 + val20 + val21 + val22 + val23 + val24 + val25 + val26 + val27 + val28 + val29 + val30 + val31 + val32 + val33 + val34 + val35 + val36 + val37 + val38 + val39 + val40 + val41 + val42 + val43 + val44 + val45 + val46 + val47 + val48 + val49 + val50 + val51 + val52 + val53 + val54 + val55 + val56 + val57 + val58 + val59 + val60 + val61 + val62 + val63 + val64 + val65 + val66 + val67 + val68 + val69 + val70 + val71 + val72 + val73 + val74 + val75 + val76 + val77 + val78 + val79 + val80 + val81 + val82 + val83 + val84 + val85 + val86 + val87 + val88 + val89 + val90 + val91 + val92 + val93 + val94 + val95 + val96 + val97 + val98 + val99  ;
}


float time_me99(uint64_t *bigarray, size_t howmanyhits,
              size_t repeat) {
  clock_t begin_time, end_time;
  float mintime = 99999999999;
  uint64_t bogus = 0;
  while (repeat-- > 0) {
    begin_time = clock();
    bogus += naked_access_99(bigarray, howmanyhits);
    end_time = clock();
    float tv = float(end_time - begin_time) / CLOCKS_PER_SEC;
    if (tv < mintime)
      mintime = tv;
  }
  if (bogus == 0x010101) {
    printf("ping!");
  }
  std::cout << 99 << " " << mintime << std::endl;
  return mintime;
}

void naked_measure_body(float (&time_measure)[NAKED_MAX], uint64_t *bigarray, size_t howmanyhits, size_t repeat) {
  time_measure[1] = time_me1(bigarray, howmanyhits, repeat);
  time_measure[2] = time_me2(bigarray, howmanyhits, repeat);
  time_measure[3] = time_me3(bigarray, howmanyhits, repeat);
  time_measure[4] = time_me4(bigarray, howmanyhits, repeat);
  time_measure[5] = time_me5(bigarray, howmanyhits, repeat);
  time_measure[6] = time_me6(bigarray, howmanyhits, repeat);
  time_measure[7] = time_me7(bigarray, howmanyhits, repeat);
  time_measure[8] = time_me8(bigarray, howmanyhits, repeat);
  time_measure[9] = time_me9(bigarray, howmanyhits, repeat);
  time_measure[10] = time_me10(bigarray, howmanyhits, repeat);
  time_measure[11] = time_me11(bigarray, howmanyhits, repeat);
  time_measure[12] = time_me12(bigarray, howmanyhits, repeat);
  time_measure[13] = time_me13(bigarray, howmanyhits, repeat);
  time_measure[14] = time_me14(bigarray, howmanyhits, repeat);
  time_measure[15] = time_me15(bigarray, howmanyhits, repeat);
  time_measure[16] = time_me16(bigarray, howmanyhits, repeat);
  time_measure[17] = time_me17(bigarray, howmanyhits, repeat);
  time_measure[18] = time_me18(bigarray, howmanyhits, repeat);
  time_measure[19] = time_me19(bigarray, howmanyhits, repeat);
  time_measure[20] = time_me20(bigarray, howmanyhits, repeat);
  time_measure[21] = time_me21(bigarray, howmanyhits, repeat);
  time_measure[22] = time_me22(bigarray, howmanyhits, repeat);
  time_measure[23] = time_me23(bigarray, howmanyhits, repeat);
  time_measure[24] = time_me24(bigarray, howmanyhits, repeat);
  time_measure[25] = time_me25(bigarray, howmanyhits, repeat);
  time_measure[26] = time_me26(bigarray, howmanyhits, repeat);
  time_measure[27] = time_me27(bigarray, howmanyhits, repeat);
  time_measure[28] = time_me28(bigarray, howmanyhits, repeat);
  time_measure[29] = time_me29(bigarray, howmanyhits, repeat);
  time_measure[30] = time_me30(bigarray, howmanyhits, repeat);
  time_measure[31] = time_me31(bigarray, howmanyhits, repeat);
  time_measure[32] = time_me32(bigarray, howmanyhits, repeat);
  time_measure[33] = time_me33(bigarray, howmanyhits, repeat);
  time_measure[34] = time_me34(bigarray, howmanyhits, repeat);
  time_measure[35] = time_me35(bigarray, howmanyhits, repeat);
  time_measure[36] = time_me36(bigarray, howmanyhits, repeat);
  time_measure[37] = time_me37(bigarray, howmanyhits, repeat);
  time_measure[38] = time_me38(bigarray, howmanyhits, repeat);
  time_measure[39] = time_me39(bigarray, howmanyhits, repeat);
  time_measure[40] = time_me40(bigarray, howmanyhits, repeat);
  time_measure[41] = time_me41(bigarray, howmanyhits, repeat);
  time_measure[42] = time_me42(bigarray, howmanyhits, repeat);
  time_measure[43] = time_me43(bigarray, howmanyhits, repeat);
  time_measure[44] = time_me44(bigarray, howmanyhits, repeat);
  time_measure[45] = time_me45(bigarray, howmanyhits, repeat);
  time_measure[46] = time_me46(bigarray, howmanyhits, repeat);
  time_measure[47] = time_me47(bigarray, howmanyhits, repeat);
  time_measure[48] = time_me48(bigarray, howmanyhits, repeat);
  time_measure[49] = time_me49(bigarray, howmanyhits, repeat);
  time_measure[50] = time_me50(bigarray, howmanyhits, repeat);
  time_measure[51] = time_me51(bigarray, howmanyhits, repeat);
  time_measure[52] = time_me52(bigarray, howmanyhits, repeat);
  time_measure[53] = time_me53(bigarray, howmanyhits, repeat);
  time_measure[54] = time_me54(bigarray, howmanyhits, repeat);
  time_measure[55] = time_me55(bigarray, howmanyhits, repeat);
  time_measure[56] = time_me56(bigarray, howmanyhits, repeat);
  time_measure[57] = time_me57(bigarray, howmanyhits, repeat);
  time_measure[58] = time_me58(bigarray, howmanyhits, repeat);
  time_measure[59] = time_me59(bigarray, howmanyhits, repeat);
  time_measure[60] = time_me60(bigarray, howmanyhits, repeat);
  time_measure[61] = time_me61(bigarray, howmanyhits, repeat);
  time_measure[62] = time_me62(bigarray, howmanyhits, repeat);
  time_measure[63] = time_me63(bigarray, howmanyhits, repeat);
  time_measure[64] = time_me64(bigarray, howmanyhits, repeat);
  time_measure[65] = time_me65(bigarray, howmanyhits, repeat);
  time_measure[66] = time_me66(bigarray, howmanyhits, repeat);
  time_measure[67] = time_me67(bigarray, howmanyhits, repeat);
  time_measure[68] = time_me68(bigarray, howmanyhits, repeat);
  time_measure[69] = time_me69(bigarray, howmanyhits, repeat);
  time_measure[70] = time_me70(bigarray, howmanyhits, repeat);
  time_measure[71] = time_me71(bigarray, howmanyhits, repeat);
  time_measure[72] = time_me72(bigarray, howmanyhits, repeat);
  time_measure[73] = time_me73(bigarray, howmanyhits, repeat);
  time_measure[74] = time_me74(bigarray, howmanyhits, repeat);
  time_measure[75] = time_me75(bigarray, howmanyhits, repeat);
  time_measure[76] = time_me76(bigarray, howmanyhits, repeat);
  time_measure[77] = time_me77(bigarray, howmanyhits, repeat);
  time_measure[78] = time_me78(bigarray, howmanyhits, repeat);
  time_measure[79] = time_me79(bigarray, howmanyhits, repeat);
  time_measure[80] = time_me80(bigarray, howmanyhits, repeat);
  time_measure[81] = time_me81(bigarray, howmanyhits, repeat);
  time_measure[82] = time_me82(bigarray, howmanyhits, repeat);
  time_measure[83] = time_me83(bigarray, howmanyhits, repeat);
  time_measure[84] = time_me84(bigarray, howmanyhits, repeat);
  time_measure[85] = time_me85(bigarray, howmanyhits, repeat);
  time_measure[86] = time_me86(bigarray, howmanyhits, repeat);
  time_measure[87] = time_me87(bigarray, howmanyhits, repeat);
  time_measure[88] = time_me88(bigarray, howmanyhits, repeat);
  time_measure[89] = time_me89(bigarray, howmanyhits, repeat);
  time_measure[90] = time_me90(bigarray, howmanyhits, repeat);
  time_measure[91] = time_me91(bigarray, howmanyhits, repeat);
  time_measure[92] = time_me92(bigarray, howmanyhits, repeat);
  time_measure[93] = time_me93(bigarray, howmanyhits, repeat);
  time_measure[94] = time_me94(bigarray, howmanyhits, repeat);
  time_measure[95] = time_me95(bigarray, howmanyhits, repeat);
  time_measure[96] = time_me96(bigarray, howmanyhits, repeat);
  time_measure[97] = time_me97(bigarray, howmanyhits, repeat);
  time_measure[98] = time_me98(bigarray, howmanyhits, repeat);
  time_measure[99] = time_me99(bigarray, howmanyhits, repeat);
}
