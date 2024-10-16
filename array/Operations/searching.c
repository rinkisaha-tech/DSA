#include<stdio.h>

int main(){

    int arr[] = {1, 72, 5, 34, 9, 50, 82};
    int i, j = 0, searchNum = 50;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < n; i++){
        printf("arr[%d] = %d ",i,arr[i]);
    }

    while(j < n){
        if (arr[j] == searchNum)
        {
            break;
        }
        j++;
    }
    printf("\n\nThe element %d is found at %d position.",searchNum,j+1);
}