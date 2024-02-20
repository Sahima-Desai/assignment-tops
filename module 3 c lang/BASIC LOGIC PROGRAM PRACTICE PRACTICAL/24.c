#include<stdio.h>
int main()
{
    char  e1[30],e2[30],e3[30],e4[30],e5[30];
    int s1,s2,s3,s4,s5;
    float total,average;
    printf("enter the name of employees\n");
    scanf("%s %s %s %s %s",&e1,&e2,&e3,&e4,&e5);
    printf("enter the salary of employees\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    average=total/5;
    printf("the average salary is %f",average);
    printf("the total salary is %f",total);
    return 0;
}

