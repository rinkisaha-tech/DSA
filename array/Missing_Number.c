#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]) + 1;

    int total_sum = ( size * ( size + 1)) / 2;
    int i, actual_sum = 0 , missing_number;

    for(i = 0; i < size - 1; i++)
    {
        actual_sum += arr[i];
    }
    missing_number = total_sum - actual_sum;

    printf("\nThe missing number from %d natural number is = %d .", size, missing_number);

    return 0;
    
}