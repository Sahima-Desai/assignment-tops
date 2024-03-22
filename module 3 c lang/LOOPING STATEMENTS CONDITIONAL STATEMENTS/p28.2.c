#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a value for n:");
    scanf("%d",&n);

    int term=1;
    printf("%d",term);

    for(i=1;i<n;i++)
    {
        if(i%2==1)
        {
            term*=2;
        }
        else
        {
            term*=3;
        }
        printf("%d",term);
    }
    printf("\n");
    return 0;
}
