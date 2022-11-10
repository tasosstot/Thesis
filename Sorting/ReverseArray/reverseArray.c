// #include <stdio.h>
// #include <stdlib.h>



int reverse(int * arr, int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return * arr;
}




// void reverse(int * arr, int n){
//     int temp;
//     for(int i = 0; i<n/2; i++){
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }


// int main(){
//     int arr[n] = {9, 8, 7, 2, 4, 3};
    
    
//    int y = reverse(arr);
    
//     for(int i = 0; i < n; i++){
//         printf("%d,", arr[i]);
//     }
// }

