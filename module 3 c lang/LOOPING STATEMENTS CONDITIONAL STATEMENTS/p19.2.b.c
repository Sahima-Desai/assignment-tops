#include<stdio.h>
int main()
{
    int i,j,n;
    char c='A';
    printf("enter the no of lines of pattern:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {

        for(j=0;j<=i;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }

}
