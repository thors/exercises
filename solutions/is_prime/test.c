#include <stdio.h>
#include <assert.h>
#include "is_prime.h"

int errorcount;

int main(int argc, char *args[]) {
  errorcount=0;
  if (!is_prime(3)) { errorcount++; printf("ERROR: 3 is prime\n"); }
  if (!is_prime(2)) { errorcount++; printf("ERROR: 2 is prime\n"); }
  if (is_prime(4)) { errorcount++; printf("ERROR: 4 is not prime\n"); }
  if (is_prime(1)) { errorcount++; printf("ERROR: 1 is not prime\n"); }
  if (is_prime(-100)) { errorcount++; printf("ERROR: -100 is not prime\n"); }
  if (is_prime(-3)) { errorcount++; printf("ERROR: -3 is not prime\n"); }
  if (is_prime(-9)) { errorcount++; printf("ERROR: -9 is not prime\n"); }
  if (is_prime(0)) { errorcount++; printf("ERROR: 0 is not prime\n"); }
  printf("%d error(s) found\n", errorcount);
  return errorcount;
}
