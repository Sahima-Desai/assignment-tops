#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i, vowels=0, consonants=0;

    printf("enter a string: ");
    scanf("%s",&string);
    for(i=0;string[i];i++)
    {

        if(string[i]=='a', string[i]=='e', string[i]=='i', string[i]=='o', string[i]=='u'||
           string[i]=='A', string[i]=='E', string[i]=='I', string[i]=='O', string[i]=='U')
            vowels++;
        else
            consonants++;


    }
    printf("\nvowels = %d\n",vowels);
    printf("\nconsonants = %d\n", consonants);
    return 0;
}
