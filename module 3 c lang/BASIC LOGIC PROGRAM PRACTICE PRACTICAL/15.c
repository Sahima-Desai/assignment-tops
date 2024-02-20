#include<stdio.h>
int main()
{
    char school_fname[30],school_mname[30],school_lname[30];
    printf("enter the school_fname,school_mname,school_lname\n");
    scanf("%s %s %s",&school_fname,&school_mname,&school_lname);
    printf("abbreviated name:");
    printf("%c %c %c",school_fname[0],school_mname[0],school_lname[0]);
    return 0;

}
