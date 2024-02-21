#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,len;
    printf("enter string1: ");
    gets(s1);

    printf("enter string2: ");
    gets(s2);

    strcat(s1,s2);
    printf("\ncombined string is: %s\n",s1);
    return 0;
}
