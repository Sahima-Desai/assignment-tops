#include<stdio.h>
int main()
{
    float e1,e2,e3,e4,e5,total;
    printf("enter the 5 expenses");
    scanf("%f %f %f %f %f",&e1,&e2,&e3,&e4,&e5);
    total=e1+e2+e3+e4+e5;
    printf("the total expense is %f",total);
    return 0;
}
