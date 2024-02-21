#include<stdio.h>
int main()
{
    int i,j,n;
    char c='A';
    printf("enter the no of lines of pattern:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+i);

        }
        printf("\n");
    }
    return 0;
}
