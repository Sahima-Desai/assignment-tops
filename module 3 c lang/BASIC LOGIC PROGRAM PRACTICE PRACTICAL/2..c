#include<stdio.h>
int main()
{
    int a,b,sum,diff,mult,division,modulo;
    printf("enter the value of a\n");
    printf("enter the value of b\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    mult=a*b;
    division=a/b;
    modulo=a%b;
    printf("addition is %d\n",sum);
    printf("subtraction is %d\n",diff);
    printf("multiplication is %d\n",mult);
    printf("division is %d\n",division);
    printf("modulo is %d\n",modulo);
    return 0;
}
