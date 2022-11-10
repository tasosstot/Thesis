#include <time.h>

void bubbleSort(int * list, int n)
{
  int c, d, t;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] > list[d+1]) {
        /* Swapping */
        t = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }

}


 int main(){
    int my_array[5000];
    double time_spent = 0.0;
    long c;
    long n = 5000;
    int i,it;
    for (i = 0; i < n; i++){
        my_array[i] = i+100;
    }

    clock_t begin = clock();
    for (it = 0; it < 10; it++){
        bubbleSort(my_array, n);
    }
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);



  //  for (c = 0; c < n; c++)
 //       printf("%ld\n", my_array[c]);

   return 0;
 }




