#include<stdio.h>
int main()
{
    int i,n,sum=0;
    n=1523;
    printf("the number is %d\n",n);
    while(n!=0)
    {
        sum +=n%10;
        n =n/10;
    }
    printf("sum is %d\n",sum);
    return 0;
}
