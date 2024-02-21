#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter the string1:");
    scanf("%s",s1);
    printf("\nenter the string2:\n");
    scanf("%s",s2);
    printf("\nString1 is %s", s1);
    printf("\nString 2 is %s",s2);
    strcpy(s2,s1);
    printf("\n%s is the s2\n",s1);
    return 0;
}
