#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("enter the num");
    for(i=1;i<3;i++)
    {
        scanf("%d",&num);
        fact=fact*i;

        printf("\nthe factorial of %d is %d\n",num,fact);
    }
    return 0;

}
