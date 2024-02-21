#include<stdio.h>
int main()
{
    int i,n,even_sum=0,odd_sum=0;
    printf("enter 10 numbers\n");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2==0)
        {
            printf("the even numbers are %d\n",n);
            even_sum=even_sum+n;

        }
        else
        {
            printf("the odd numbers are %d\n",n);
            odd_sum=odd_sum+n;
        }
        printf("sum of even numbers is %d\n",even_sum);
        printf("sum of odd numbers is %d\n",odd_sum);
    }
    return 0;
}
