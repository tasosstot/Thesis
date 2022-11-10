
#include <stdio.h>
#include <stdlib.h>

void * multiplyIntVec(int *src1, int*src2, int *res2, int n) {
  for (int i = 0; i < n; i++) {
    res2[i] = src1[i] * src2[i];
    }
}

int main()
{
    int y;
    int i;
    int it;
    int my_array[90000];
    int my_array1[90000];
    int res2[90000];

    for (i = 0; i < 90000; i++){
        my_array[i] = rand()%1000000;
        my_array1[i] = rand()%1000000;
    }

for (int it = 0; it < 50; it++)
multiplyIntVec(my_array, my_array1 ,res2, 90000);

    return 0;
}





