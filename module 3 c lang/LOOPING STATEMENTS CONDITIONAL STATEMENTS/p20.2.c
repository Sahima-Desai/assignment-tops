#include<stdio.h>
int main()
{
    int i,j,row,colmn,k;
    printf("enter the no of rows");
    scanf("%d",&row);
    printf("enter the no of columns");
    scanf("%d",&colmn);

    k=1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colmn;j++,k++)
        {
            printf("%-3d",k);
        }
        printf("\n");
    }
    return 0;
}
