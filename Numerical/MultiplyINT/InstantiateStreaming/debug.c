#include <stdlib.h>
#include <stdio.h>


int multiplyInt(int a, int b, int big_num) {
  int c = 1;
  for (int i = 0; i < big_num; i++) {
    c = c * a * b;
  }
  return c;
}


void multiplyLooper(int loop){
    int big_num = 300000000;
    for( int i=0; i < loop; i++){
        int multiplier = multiplyInt(1, 1, 1231231);
    }
}