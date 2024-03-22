#include<stdio.h>
int main()
{
    int rem,num=1562,max=0;
    while(num!=0)
    {
        rem=num%10;
        if(rem>max)
        {
            max=rem;
        }
        num=num/10;
    }
    printf("the maximum number is %d\n",max);
    return 0;
}
