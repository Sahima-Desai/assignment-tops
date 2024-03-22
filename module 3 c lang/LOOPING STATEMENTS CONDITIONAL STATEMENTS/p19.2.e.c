#include<stdio.h>
int main()
{
    int i,j,n,c=1;
    printf("enter the no of lines of pattern:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",c);
            c++;
        }

        printf("\n");
    }

}
