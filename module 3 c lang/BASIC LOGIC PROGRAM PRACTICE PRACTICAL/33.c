#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,b,c;
    printf("enter the num value: ");
    scanf("%d",&num);
    a=pow(num,1);
    b=pow(num,2);
    c=pow(num,3);
    printf("the first three powers are %d %d %d\n",a,b,c);
    return 0;

}
