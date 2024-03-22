#include<stdio.h>
int main()
{
    int num,sum=0,first_digit,last_digit;
    printf("enter the number\n");
    scanf("%d",&num);
    last_digit=num%10;
    first_digit=num;
    while(num>=10)
    {
        num=num/10;
    }
     first_digit=num;
    sum=first_digit+last_digit;
    printf("the sum is %d:",sum);
    return 0;
}
