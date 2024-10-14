
#include<stdio.h>

int main()
{
    int arr[] = { 1, 5, 9, 14, 33, 36, 50, 78, 88, 135, 156, 424};
    int mid, size = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = size - 1, target = 105;
    int flag = 0;

    while (left <= right)
    {
        mid = left + ( right - left) /2;

        if (arr[mid] == target)
        {
            flag = 1;
            printf("\nThe element %d found at position %d.",arr[mid],mid+1);
            break;
        }
        
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

    }
    if ( flag == 0)
    {
        printf("The element %d is not found in the array..",target);
    }
    
    return 0;
}