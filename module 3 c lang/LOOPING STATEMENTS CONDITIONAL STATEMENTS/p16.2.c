#include<stdio.h>
int main()
{
    int i=1,sum=0,num;
    printf("enter the natural numbers");
    scanf("%d",&num);
    while(i<=num)
    {
       sum+=i;
       i++;
    }
    printf("the sum of numbers is:%d",sum);
    return 0;
}
