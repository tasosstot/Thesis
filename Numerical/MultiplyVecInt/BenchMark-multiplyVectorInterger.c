#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void * multiplyIntVec(int *src1, int*src2, int *res2, int n) {
  for (int i = 0; i < n; i++) {
    res2[i] = src1[i] * src2[i];
    }
}

int main()
{
    double time_spent = 0.0;
    int y,i,it;
    int my_array[90000];
    int my_array1[90000];
    int res2[90000];

    for (i = 0; i < 90000; i++){
        my_array[i] = rand()%1000000;
        my_array1[i] = rand()%1000000;
    }

    clock_t begin = clock();

    for (int it = 0; it < 50; it++)
    multiplyIntVec(my_array, my_array1 ,res2, 90000);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);


    return 0;
}





