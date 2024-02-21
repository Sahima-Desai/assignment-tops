#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("enter the no of elements of an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("even numbers of an array are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("odd numbers of an array are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d\t",arr[i]);
        }
    }
}
