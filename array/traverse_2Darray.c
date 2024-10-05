#include<stdio.h>

int main()
{
    int arr[3][3];
    int i, j, row = 3, column = 3;
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Insert the [%d][%d]'th element: ", i, j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("The following matrix is: \n");

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}