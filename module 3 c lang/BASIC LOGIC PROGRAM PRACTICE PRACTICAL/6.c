#include<stdio.h>
int main()
{
    int l,h;
    float area;
    printf("enter length and height of triangle");
    scanf("%d %d",&l,&h);
    area=0.5*l*h;
    printf("area of triangle is %f",area);
    return 0;
}

