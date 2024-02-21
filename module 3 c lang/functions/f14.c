#include<stdio.h>
int main()
{
    int i,j,row,column;
    int arr[100][100];
    printf("enter total no of rows:\t");
    scanf("%d",&row);
    printf("enter total no of columns:\t");
    scanf("%d",&column);

    printf("total elements of an array are :%d",row*column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d\t",&arr[i][j]);
        }

    }
    printf("the array of elements is:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

