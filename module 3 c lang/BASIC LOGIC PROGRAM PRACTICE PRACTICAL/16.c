#include<stdio.h>
int main()
{
    char country_name[30];
    printf("enter the country_name\n");
    scanf("%s",&country_name);
    printf("abbreviated name:");
    printf("%c",country_name[0]);
    return 0;

}
