#include <stdlib.h>
#include <stdio.h>


int multiplyInt(int a, int b, int big_num) {
  int c = 1;
  for (int i = 0; i < big_num; i++) {
    c = c * a * b;
  }
  return c;
}




int main()
{

    int y;
    for (int i = 0; i < 500; i++) {
        y = multiplyInt(3000000,3000000,3000000); // 27.808 s s
    }

    return 0;
}




