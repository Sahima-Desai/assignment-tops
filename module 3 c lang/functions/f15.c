#include<stdio.h>
int main()
{
    int arr[100],i,j,temp,n;
    printf("enter total no of elements of an array\n");
    scanf("%d",&n);

    printf("enter the elements of an array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    printf("the elements sorted in an ascending order is:");
    {
        for(i=0;i<n;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
}
