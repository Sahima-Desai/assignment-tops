#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;


    printf("enter operators (+,-,*,/):");
    scanf("%c",&operator);

    printf("enter value of two numbers");
    scanf("%lf %lf",&num1,&num2);

    switch (operator)
    {
        case '+':
           result=num1+num2;
           printf("Result: %.2lf + %.2lf\n = %.2lf",num1,num2,result);
            break;
        case '-':
            result=num1-num2;
           printf("Result: %.2lf - %.2lf\n = %.2lf",num1,num2,result);
            break;
        case '*':
            result=num1*num2;
           printf("Result: %.2lf * %.2lf\n =%.2lf",num1,num2,result);
            break;
        case '/':
           result=num1/num2;
           printf("Result: %.2lf/%.2lf\n=%.2lf",num1,num2,result);
            break;
        default:
            printf("enter valid choice");

    }
    return 0;
}

