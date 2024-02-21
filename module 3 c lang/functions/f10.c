#include<stdio.h>
void reverse();
int main()
{
    reverse();
    return 0;
}
void reverse()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("numbers in reverse order are:\n");
    for(i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
