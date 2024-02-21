#include<stdio.h>
struct employee{
    int empno,empage;
    char empname,empaddress;

};
int main()
{
    struct employee e1;
    //we can either take it from the user also
    printf("enter empno. of an employee\n");
    scanf("%d",&e1.empno);
    printf("enter emp age of an employee\n");
    scanf("%d",&e1.empage);
    printf("enter address of an employee\n");
    scanf("%s",&e1.empaddress);
    printf("enter name of an employee\n");
    scanf("%s",&e1.empname);

    printf("employee details are\n:");
    printf("name: %s",e1.empname);
    printf("no is: %d",e1.empno);
    printf("address is: %s",e1.empaddress);
    printf("age is:%d",e1.empage);

    return 0;
}
