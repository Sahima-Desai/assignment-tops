#include<stdio.h>
int main()
{
    int r;
    float pi=3.14,area,circumference;
    printf("enter the radius: ");
    scanf("%d",&r);
    circumference=2*pi*r;
    area=pi*r*r;
    printf("circumference of circle is %f\n",circumference);
    printf("area of circle is %f\n",area);
    return 0;
}
