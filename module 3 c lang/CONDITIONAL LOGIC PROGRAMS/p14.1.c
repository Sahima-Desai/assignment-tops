#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("the largest number is a:%d",a);
    }
    if((b>a)&&(b>c))
    {
        printf("the largest number is b:%d",b);
    }
    if((c>a)&&(c>b))
    {
        printf("the largest number is c:%d",c);
    }
    return 0;
}
