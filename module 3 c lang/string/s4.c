#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int count=0,i;

    printf("enter the string:\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] ==' ' && s[i+1] !=' ')
            count++;
    }
    printf("no of words in a given string are: %d\n",count+1);
    return 0;
}
