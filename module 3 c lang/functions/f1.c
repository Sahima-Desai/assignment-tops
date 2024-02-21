#include<stdio.h>

int max(int arr[], int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{

    int arr[n]={12,43,5,23,22};
    int max_number=max(arr,n);
    printf("the maximum number from the array is: %d\n",max_number);
    return 0;
}
