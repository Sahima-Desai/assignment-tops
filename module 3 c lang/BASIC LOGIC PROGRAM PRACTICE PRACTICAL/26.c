#include<stdio.h>
int main()
{
    float celsius,fahrenheit;

    printf("enter the temperature value of fahrenheit\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("the temperature in celsius is %2f",celsius);
    return 0;

}
