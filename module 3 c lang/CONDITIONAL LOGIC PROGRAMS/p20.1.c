#include<stdio.h>
int main()
{
    int month_no;
    printf("enter the month_no\n");
    scanf("%d",&month_no);
    if(month_no==1||month_no==3||month_no==5||month_no==7||month_no==8||month_no==10||month_no==12)
    {
        printf("it has 31 days");
    }
    else if(month_no==2)
    {
        printf("it has 28 days");
        printf("in a leap year it has 29 days");
    }
    else if(month_no==4||month_no==6||month_no==9||month_no==11)
    {
        printf("it has 30 days");
    }
    else
    {
        printf("invalid month_no");

    }
    return 0;
}
