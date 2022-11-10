#include <stdlib.h>
#include <stdio.h>



int Cfibonacci(num) {
  if (num == 1) return 1;
  if (num == 2) return 1;
  return Cfibonacci(num-1) + Cfibonacci(num-2);
}

int FibonacciNumbers(num){
   int num_fib_c;
  for (int i=3; i<=num; i++){
    int num_fib_c = Cfibonacci(i);
  }
return 1;
}

int main(){
    FibonacciNumbers(45);
}
