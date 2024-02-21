#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a value for n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=(i%2==0)? -(float)i/(i+1) : (float)i/(i+1);
    }
    printf("the sum of the series is: %.2f\n",sum);
    return 0;
}
