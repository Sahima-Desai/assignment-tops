#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("enter the value of three numbers");
    scanf("%d %d %d",&a,&b,&c);
    min = (a>b)?((a>c)?b:a):((b>c)?c:b);
    printf("the minimum number is : %d",min);
    return 0;
}

