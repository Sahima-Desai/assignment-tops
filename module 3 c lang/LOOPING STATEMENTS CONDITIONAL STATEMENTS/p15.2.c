#include<stdio.h>
int main()
{
    int i=1,num,sum=0;

    while(i<=10)
    {

        sum+=i;
        i++;
    }
    printf("the sum of numbers is %d",sum);
    return 0;
}
