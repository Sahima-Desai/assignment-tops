#include<stdio.h>
int main()
{
    int num,rem,rev=0,temp;
    printf("enter the num to reverse\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d is the reverse of %d",rev,temp);
    return 0;

}
