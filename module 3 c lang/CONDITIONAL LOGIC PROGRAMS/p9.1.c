#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
    {
        printf("it is lowercase alphabet");
    }
    if((ch>='A')&&(ch<='Z'))
    {
        printf("it is uppercase alphabet");
    }
    if((ch>='0')&&(ch<='9'))
    {
        printf("it is a digit");
    }
    else
    {
        printf("it is a special character");
    }
    return 0;
}
