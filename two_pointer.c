#include<stdio.h>
int main()
{
    int arr[] = {12, 33, 27, 99, 64, 75};
    int n = 6, target = 60;
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target)
        {
            printf("The left element : %d , and the right element is : %d", arr[left], arr[right]);
            break;
        }
        else if (currentSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
        
        
        
    }
    
}