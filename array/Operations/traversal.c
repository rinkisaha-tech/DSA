#include<stdio.h>
void main(){
    int arr[5] = {1, 2, 3, 4, 10};
    int i, n = 5;

    printf("Elements of the array are : ");

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}