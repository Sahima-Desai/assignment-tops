int fact(int n);
#include<stdio.h>
int main()
{
    int number;
    printf("enter number\t");
    scanf("%d",&number);
    printf("%d",fact(number));
    return 0;
}
int fact(int n)
{
    if(n!=0)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }

}
