#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the num\n");
    scanf("%d",&num);
    printf("table of %d",num);
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",num,i,(num*i));
    }
    return 0;
}
