#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int reverse(int * arr, int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return * arr;
}


 int main(){
    int my_array[92000];
    double time_spent = 0.0;
    long c;
    long n = 92000;
    int i,it;
    for (i = 0; i < n; i++){
        my_array[i] = i+100;;
    }

    clock_t begin = clock();
    for (it = 0; it < 500; it++){
        reverse(my_array, n);
    }
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);



   // for (c = 0; c < n; c++)
    //  printf("%ld\n", my_array[c]);

   return 0;
 }




