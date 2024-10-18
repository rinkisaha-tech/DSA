#include<stdio.h>

int main()
{
    int arr[] = {2, 2, 2, 5, 5, 5, 5, 5, 6, 6, 7, 8, 11, 11, 11};
    int i, size = sizeof(arr)/sizeof(arr[0]);

    int target_num = 6, count = 0;

    for ( i = 0; i < size; i++)
    {
        if (arr[i] == target_num)
        {
            count++;
        }
        
    }
    printf("\nThe %d ocurrs %d times in this array.", target_num, count);
    return 0;
}