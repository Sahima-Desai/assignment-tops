#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a value for n:");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of Series:");
    for(i=1;i<=n;i++)
    {
        if(i!=n)
        {
            printf("%d +",i);
        }
        else
        {
            printf("%d = %d",i,sum);
        }

    }

    return 0;
}
