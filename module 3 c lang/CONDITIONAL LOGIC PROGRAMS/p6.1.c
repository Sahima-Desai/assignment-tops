#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("the character is vowel\n");
    }
    else
    {
        printf("the character is not a vowel\n");
    }
    return 0;
}
