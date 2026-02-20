#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

// int main() {
//     int n = 4;
//     int size = 2 * n - 1;

//     int start = 0;
//     int end = size - 1;
//     int val = n;

//     int arr[size][size]; 

//     while(val >  0){
//         for(int i = start; i<=end; i++){
//             arr[start][i] = val;
//         }

//         for(int i = start; i<=end; i++){
//             arr[end][i] = val;
//         }

//         for(int i = start; i<=end; i++){
//             arr[i][start] = val;
//         }

//         for(int i = start; i<=end; i++){
//             arr[i][end] = val;
//         }
//         start++;
//         end--;
//         val--;
//     }



//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// void swap(int *a , int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int num = 6;

//     int arr[] = {16,13,7,2,1,12};


//     for(int i = 0; i<num-1; i++){
//         for(int j = i+1; j<num; j++){
//             if(arr[i] > arr[j]){
//                 swap(&arr[i], &arr[j]);
//             }
//         }
//     }

//     for(int i = 0;i<num; i++){
//         printf("%d ",arr[i]);
//     }
// }


int main(){
    int x = 10564;
    int sum = 0;
    while(x > 0){
        sum+= x%10;
        x= x / 10;
    }

    printf("%d",sum);
    return 0;
}