#include<stdio.h>
int main()
{
    int minutes,hours,seconds;
    printf("enter the no of minutes\n");
    scanf("%d",&minutes);
    hours=minutes/60;
    seconds=minutes*60;
    printf("the total hours is %d\n",hours);
    printf("the total seconds are %d\n",seconds);
    return 0;
}
