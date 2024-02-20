#include<stdio.h>
int main()
{
   int num;
   printf("enter the value of num\n");
   scanf("%d",&num);
   if(num<0)
   {
       printf("number is negative");
   }
   if(num==0)
   {
       printf("number is zero");
   }
   else
   {
       printf("number is positive");
   }
   return 0;
}
