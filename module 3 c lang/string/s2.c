#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len=0;

    printf("enter a string: ");
    scanf("%s",str);

    printf("\nindividual characters from the string\n");

    for(len=0;str[len]!='\0';len++)
    {
        printf("%c",str[len]);
    }
    printf("\n");

    return 0;
}
