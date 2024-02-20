#include<stdio.h>
int main()
{
    int a,b,c;
    float circumference;
    printf("enter the value of a, b and c: \n");
    scanf("%d %d %d",&a,&b,&c);
    circumference=a+b+c;
    printf("the circumference of triangle is %f",circumference);
    return 0;
}
