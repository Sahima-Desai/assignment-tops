//
/*
#include<stdio.h>
int main()
{
    int week_no;
    printf("enter the week_no\n");
    scanf("%d",&week_no);
    if(week_no==1)
    {
        printf("monday",week_no);
    }
    else if(week_no==2)
    {
        printf("tuesday",week_no);
    }
     else if(week_no==3)
    {
        printf("wednesday",week_no);
    }
    else if(week_no==4)
    {
        printf("thursday",week_no);
    }
     else if(week_no==5)
    {
        printf("friday",week_no);
    }
     else if(week_no==6)
    {
        printf("saturday",week_no);
    }
    else if(week_no==7)
    {
        printf("sunday",week_no);
    }
    else
    {
        printf("invalid week no");
    }
    return 0;
}

*/
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
