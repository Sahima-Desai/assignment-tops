#include<stdio.h>
int main()
{
    char string[100];
    int i, alphabets=0, digits=0, special_characters=0;

    printf("enter a string");
   gets(string);
    for(i=0;string[i];i++)
    {
        if((string[i]>=65 && string[i]<=90)|| (string[i]>=97 && string[i]<=122))
            alphabets++;
        else if(string[i]>=48 && string[i]<=57)
            digits++;
        else
            special_characters++;
    }

    printf("Alphabets = %d\n",alphabets);
    printf("Digits=%d\n",digits);
    printf("Special_characters",special_characters);
    return 0;
}
