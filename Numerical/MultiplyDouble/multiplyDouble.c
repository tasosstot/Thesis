#include <stdio.h>
#include <stdlib.h>


double multiplyInt(double a, double b, double big_num) {
  double c = 1.0;
  for (int i = 0; i < big_num; i++) {
    c = c * a * b;
  }
  return c;
}





