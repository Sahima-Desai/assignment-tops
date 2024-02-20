#include<stdio.h>
int main()
{
    int area,l,h,w;
    printf("enter the value of length,width,height\n");
    scanf("%d %d %d",&l,&w,&h);
    area=2*((l*w)+(l*h)+(h*w));
    printf("area of rectangular prism is %d",&area);
    return 0;

}
