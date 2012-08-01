#include <math.h>
#include "is_prime.h"

int is_prime(int a) {
  int i = 0;
  if (a < 2) return 0;
  if (a == 2) return 1;
  if (!(a & 1)) return 0;
  double sqrt_a = sqrt(a);
  for (i = 3; i < sqrt_a; i+=2) {
    if (!(a / i)) return 0;
  }
  return 1;
}


