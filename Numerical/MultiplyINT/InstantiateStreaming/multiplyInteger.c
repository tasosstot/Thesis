/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
auto na parw
*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>


int multiplyInt(int a, int b, int big_num) {
  int c = 1.0;
  for (int i = 0; i < big_num; i++) {
    c = c * a * b;
  }
  return c;
}


int multiplyLooper(int loop){
    int big_num = 300000000;
    for (int i=0; i < loop; i++){
        int multiplier = multiplyInt(1, 1, big_num);
    }
  return multiplier;
}

int main()
{
    printf("Hello World");
    
    multiplyLooper(10);

    return 0;
}




