#include<stdio.h>
int main()
{
    float marks;
    printf("enter the marks\n");
    scanf("%f",&marks);
    if(marks<24)
    {
        printf("fail");
    }
    if(marks>=24)
    {
        printf("pass");
    }
    return 0;
}
