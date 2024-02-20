#include<stdio.h>
int main()
{
    int ch;
    printf("enter 1 for monday\n 2 for tuesday\n 3 for wednesday\n 4 for thursday\n 5 for friday\n 6 for saturday\n 7 for sunday\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invalid choice");
    }
    return 0;
}
