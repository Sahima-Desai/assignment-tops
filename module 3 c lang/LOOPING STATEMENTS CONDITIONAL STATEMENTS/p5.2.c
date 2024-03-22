#include<stdio.h>
int main()
{
    int i,n,n1=0,n2=1,n3=n1+n2;
    printf("%d %d ",n1,n2);//0 1

    for(i=0;i<=9;i++)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;

        printf(" %d ",n3);//printing fibonacci series

    }
    return 0;
}
