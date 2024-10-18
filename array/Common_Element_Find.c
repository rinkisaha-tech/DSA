// Find common element in 4 sorted array.

#include<stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {1, 3, 6, 9, 12};
    int arr3[] = {1, 2, 3, 5, 7, 11, 13};
    int arr4[] = {1, 11, 22, 33};

    int len_arr1 = sizeof(arr1) / sizeof(arr1[0]);
    int len_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    int len_arr3 = sizeof(arr3) / sizeof(arr3[0]);
    int len_arr4 = sizeof(arr4) / sizeof(arr4[0]);

    int i = 0, j = 0, k = 0, l = 0;
    
    printf("Array 1: ");
    for ( i = 0; i < len_arr1; i++)
    {
        printf(" %d ",arr1[i]);
    }

    printf("\nArray 2: ");
    for ( j = 0; j < len_arr2; j++)
    {
        printf(" %d ",arr2[j]);
    }

    printf("\nArray 3: ");
    for ( k = 0; k < len_arr3; k++)
    {
        printf(" %d ",arr3[k]);
    }

    printf("\nArray 4: ");
    for ( l = 0; l < len_arr4; l++)
    {
        printf(" %d ",arr4[l]);
    }


    printf("\nCommon elements between 4 array are:  ");
    i = 0, j = 0, k = 0, l = 0;

    while (i < len_arr1 && j < len_arr2 && k < len_arr3 && l < len_arr4)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k] && arr3[k] == arr4[l])
        {
            printf("%d \n", arr1[i]);
            i++; j++; k++; l++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else if (arr3[k] < arr4[l])
        {
            k++;
        }
        else
        {
            l++;
        }

    }
    printf("\n");

    return 0;
    

}