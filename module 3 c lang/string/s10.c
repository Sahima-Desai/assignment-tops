#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],substr[100];
    int l,i,c=0;

    printf("enter a string:");
    gets(str);

    printf("\nenter the starting index of a substring\n");
    scanf("%d",&i);

    printf("\nenter the length of a substring\n");
    scanf("%d",&l);

    while(c<l)
    {
        substr[c]=str[i+c-1];
        c++;
    }
    substr[c]='\0';

    printf("the substring is: %s \n",substr);
    return 0;
}
