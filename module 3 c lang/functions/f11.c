#include<stdio.h>
void palindrome();
int main()
{
    palindrome();
    return 0;
}
void palindrome()
{
    int rev=0,num,rem,temp;
    printf("enter the value of num to reverse it\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d is the reverse of %d\n",rev,temp);
    if(temp==rev)
    {
        printf("\n the number is palindrome\n");

    }
    else
    {
        printf("\n the number is not palindrome\n");
    }

}
