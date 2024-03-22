#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a value for n:");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        sum +=(i*i);
    }

        printf("the series from 1 to %d: %d\n:",n,sum);
          return 0;
}
