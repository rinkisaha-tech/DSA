#include<stdio.h>

int main(){

    int arr[10] = {12 , 55, 87 , 99 , 57};
    int i, pos, num, n = 5;

    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }

    printf("\n\n");

    pos = 4, num = 90;
    n++;

    for(i = n-1; i >= pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1] = num;

    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}