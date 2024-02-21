#include<stdio.h>
int main()
{
    int i,n1[100],n2[100],sum[100];
    printf("enter the 5 values of an array 1\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n1[i]);
    }

    printf("enter the 5 values of array 2\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n2[i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=n1[i]+n2[i];
    }
    for(i=0;i<5;i++)
    {
        printf("sum is %d\n",sum[i]);
    }
    return 0;
}
