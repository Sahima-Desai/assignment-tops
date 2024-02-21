#include<stdio.h>
void reverse();
int main()
{

    int rem,rev,temp,num;
    printf("enter the num\n");
    scanf("%d",&num);
    temp=num;
    rem=rem%10;
    rev=rev*10+rem;
    num=num/10;
    reverse();


    return 0;

}
void reverse(int temp,int num,int rev)
{
    printf("the reverse of %d is %d",temp,num);
    if(temp==num)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not a palindrome number");
    }
}
