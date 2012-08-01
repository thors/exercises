#include "is_prime.h"

int is_prime(int a) {
  int i = 0;
  if (!(a & 1)) return 0; //even numbers are rarely prime...
  for (i = 3; i < a; i+=2) {
    if (!(a / i)) return 0;
  }
  return 1;
}


