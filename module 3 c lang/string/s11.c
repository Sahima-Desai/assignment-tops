/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("string in upper case= %s",str);
    return 0;
}

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("string in lower case= %s",str);
    return 0;
}
