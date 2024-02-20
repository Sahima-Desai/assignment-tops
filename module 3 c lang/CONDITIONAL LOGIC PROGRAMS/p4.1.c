#include<stdio.h>
int main()
{
    char op;
    float a,b,result=0;
    printf("enter your choice: + for addition\n  - for subtraction\n  * for multiplication\n  / for division\n % for modulo\n");
    scanf("%c",&op);
    printf("enter the values of a and b\n");
    scanf("%f %f",&a,&b);
    switch(op)
    {
        case '+':
            result=a+b;
            break;
        case '-':
            result=a-b;
            break;
        case '*':
            result=a*b;
            break;
        case '/':
            result=a/b;
            break;

        default:
            printf("invalid operator");
    }
        printf("the value is %f\n",result);
        return 0;
}




