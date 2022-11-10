#include <stdio.h>
#include <stdlib.h>


double multiplyInt(double a, double b, double big_num) {
  double c = 1.0;
  for (int i = 0; i < big_num; i++) {
    c = c * a * b;
  }
  return c;
}




int main()
{

    double y;

    for (int i = 0; i < 500; i++) {
        y = multiplyInt(3000000,3000000,3000000); // 30.294 s
    }
    return 0;
}
