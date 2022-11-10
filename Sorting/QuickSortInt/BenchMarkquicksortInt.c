#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void quicksortInt(int *array, int start, int end) {
  if (start >= end) return;
  double pivot = array[end];
  int left = 0;
  int right = 0;
  while (left + right < end - start) {
    double num = array[start+left];
    if (num < pivot) {
      left++;
    } else {
      array[start+left] = array[end-right-1];
      array[end-right-1] = pivot;
      array[end-right] = num;
      right++;
    }
  }
  quicksortInt(array, start, start+left-1);
  quicksortInt(array, start+left+1, end);
}

 int main(){
    int my_array[2000];
    int start = 0;
    double time_spent = 0.0;
    long c;
    long n = 100;
    int i,it;
    for (i = 0; i < n; i++){
        my_array[i] = i;
    }


    for (it = 0; it < n; it++){
        clock_t begin = clock();
        quicksortInt(my_array, start,  n -1);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    }


    printf("The elapsed time is %f seconds", time_spent);



  // for (c = 0; c < n; c++)
   //  printf("%ld\n", my_array[c]);

   return 0;
 }
