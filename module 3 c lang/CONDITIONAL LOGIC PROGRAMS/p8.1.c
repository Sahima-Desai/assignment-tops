#include<stdio.h>
int main()
{
   float height;
   printf("enter the height of a person\n");
   scanf("%f",&height);
   if(height<150)
   {
       printf("the person is dwarf");
   }
   if((height>=150)&&(height<165))
   {
       printf("the person is avg height");
   }
   if((height>=165)&&(height<=195))
   {
       printf("the person is taller");
   }
   else
   {
       printf("the person is abnormal");
   }
   return 0;
}
