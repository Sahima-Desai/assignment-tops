#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("enter 5 numbers\n");

    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
        fact=fact*i;
        printf("\nfactorial of %d is:\t%d\n",num,fact);
    }


   return 0;
}
