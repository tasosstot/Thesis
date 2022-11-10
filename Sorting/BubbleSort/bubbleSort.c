void bubbleSort(double * list, double n)
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

//
// int main(){
//    long array[5]={115,-14,133,112,1};
//    long c;
//    long n = 5;
//
//    bubble_sort(array, n);
//
//
//    for (c = 0; c < n; c++)
//        printf("%ld\n", array[c]);
//
//   return 0;
// }













// function bubbleSort(*array, n) {
//         for (let i = 0; i < n; i++) {
//             for (let j = 0; j < n; j++) {
//                 if (array[j] > array[j + 1]) {
//                     let tmp = array[j];
//                     array[j] = array[j + 1];
//                     array[j + 1] = tmp;
//                 }
//             }
//     }
//     return array;
//     };
