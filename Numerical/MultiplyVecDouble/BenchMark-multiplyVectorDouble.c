#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void * multiplyIntVec(double *src1, double*src2, double *res2, int n) {
  for (int i = 0; i < n; i++) {
    res2[i] = src1[i] * src2[i];
    }
}

int main()
{
    double time_spent = 0.0;
    int y,i,it;
    double my_array[70000];
    double my_array1[70000];
    double res2[70000];

    for (i = 0; i < 70000; i++){
        my_array[i] = rand()%10000;
        //my_array1[i] = rand()%10000;
    }

    clock_t begin = clock();
    for (int it = 0; it < 9000; it++)
    multiplyIntVec(my_array, my_array1 ,res2, 70000);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);


    return 0;
}





