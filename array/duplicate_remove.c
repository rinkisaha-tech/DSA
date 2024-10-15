//Remove the duplicate value from an array.
// Solve the problem in space complexity O(1) and time complexity O(n).
// The array always be sorted order

#include<stdio.h>

int main()
{
    int arr[20] = {10, 10, 41, 32, 6, 9, 89, 8};
    int i, x = 0, n = 8;

    for ( i = 1; i < n; i++)
    {
        if (arr[i] != arr[x])
        {
            x += 1;
            arr[x] = arr[i];
        }
        
    }

    printf("The solving array is : ");
    for ( i = 0; i <= x; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}