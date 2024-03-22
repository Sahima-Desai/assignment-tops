#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a value for n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=(i*(i+1))/2;
    }

 printf("the sum of series is: %d\n",sum);

 return 0;
}
