#include<stdio.h>
int main()
{
    char string1[100];//taking from user
    char string2[100];
    int i=0;
    printf("\nenter string1\n");
    scanf("%s",&string1);
    printf("\nenter string2\n");
    scanf("%s",&string2);

    while(string1[i]==string2[i] && string1[i] !='\0')
    {
        i++;
    }
    if(string1[i]>string2[i])
    {
        printf("\ncomparison between string1 and string2 is:string1 is greater\n");
    }
     if(string1[i]<string2[i])
     {
          printf("\ncomparison between string1 and string2 is:string2 is greater\n");
     }
     else
     {
        printf("\nboth strings are the same\n");
     }
     return 0;


}
