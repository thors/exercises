#include <stdio.h>
#include <assert.h>
#include "is_prime.h"

int errorcount;

int main(int argc, char *args[]) {
  errorcount=0;
  if (!is_prime(3)) { errorcount++; printf("ERROR: 3 is prime\n"); }
  /*
    Add your own tests here
   */
  printf("%d error(s) found\n", errorcount);
  return errorcount;
}
