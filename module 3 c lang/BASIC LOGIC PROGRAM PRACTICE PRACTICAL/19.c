#include<stdio.h>
#include<math.h>
int main()
{
    float ci,p,r,t;
    printf("enter the value of principle amount,rate of interest and time");
    scanf("%f %f %f",&p,&r,&t);
    ci=p*pow((1+r/100),t);
    printf("%f",ci);
    return 0;

}
