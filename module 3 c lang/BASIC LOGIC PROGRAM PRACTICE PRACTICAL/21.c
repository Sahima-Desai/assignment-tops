#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of two numbers\n");
    scanf("%d %d",&a,&b);
    printf("before swapping a is %d and b is %d\n",a,b);
    a=b;
    b=a;
    printf("after swapping a is %d and b is %d\n",a,b);
    return 0;

}

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of two numbers\n");
    scanf("%d %d",&a,&b);
    printf("before swapping a is %d and b is %d\n",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swapping a is %d and b is %d\n",a,b);
    return 0;

}

