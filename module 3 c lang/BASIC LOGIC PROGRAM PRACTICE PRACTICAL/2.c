#include<stdio.h>
int main()
{
    int a,b,sum,difference,multiplication,division,modulo;
    printf("enter value of a\n");
    printf("enter value of b\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    difference=a-b;
    multiplication=a*b;
    division=a/b;
    modulo=a%b;
    printf("addition is %d\n",sum);
    printf("subtaction is %d\n",difference);
    printf("multiplication is %d\n",multiplication);
    printf("division is %d",division);
    printf("modulo is %d",modulo);
    return 0;
}
