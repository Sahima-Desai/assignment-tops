#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the three angles of a triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("the triangle can be formed");
    }
    else
    {
        printf("triangle can't be formed");
    }
    return 0;
}
