#include<stdio.h>

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int sizeof_arr = sizeof(arr) / sizeof(arr[0]);
    int target_element = 4 , i , index;

    for (int i = 0; i < sizeof_arr; i++)
    {
        if (arr[i] == target_element)
        {
            index = i+1;
            printf("The target element %d index position is: %d\n ", arr[i], index);
            break;
        }
    }
    return 0;
}