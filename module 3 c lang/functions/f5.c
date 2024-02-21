#include<stdio.h>
int main()
{
    int num[100],i,j,temp;
    printf("the elements of an array are:\t");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("the array before sorting is:");
    for(i=0;i<=4;i++)
    {
        printf(" %d\t",num[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    for(i=0;i<=4;i++)
    {
        printf("the array after sorting is %d\t",num[i]);
    }

    return 0;
}


/*
#include<stdio.h>
int main()
{
    int num[100],i,j,temp;
    printf("the elements of an array are:\t");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("the array before sorting is:");
    for(i=0;i<=4;i++)
    {
        printf(" %d\t",num[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
    printf("the array after sorting is :");
    for(i=0;i<=4;i++)
    {
        printf(" %d\t",num[i]);
    }

    return 0;
}
