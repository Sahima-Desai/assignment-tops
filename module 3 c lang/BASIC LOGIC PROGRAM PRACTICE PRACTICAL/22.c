#include<stdio.h>
#include<math.h>
int main()
{
    float amount,p,r,t,ci;
    printf("enter the value of principle amount,rate of interest and time\n");
    scanf("%f %f %f",&p,&r,&t);
    amount=p*pow((1+r/100),t);
    printf("amount is %f\n",amount);
    ci=amount-p;
    printf("compound interest is %f\n",ci);
    return 0;

}

