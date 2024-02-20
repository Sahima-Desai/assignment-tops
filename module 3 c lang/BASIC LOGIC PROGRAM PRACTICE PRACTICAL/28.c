#include<stdio.h>
int main()
{
    int days,months,years;
    printf("enter the no of years\n");
    scanf("%d",&years);
    months=years*12;
    days=years*365;
    printf("the total months is %d\n",months);
    printf("the total days are %d\n",days);
    return 0;

}
