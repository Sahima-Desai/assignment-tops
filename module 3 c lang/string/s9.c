#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   int i,len,max=0;
   int count[200]={0};

   printf("\nenter a string\n");
   scanf("%s",str);

   len=strlen(str);
   for(i=0;i<len;i++)
   {
       count[str[i]]++;

   }
   for(i=0;i<200;i++)
   {
       if(count[i]>count[max])
       {
           max=i;
       }
   }
   printf("\n character'%c' appears maximum %d times in a given string:%s",max,count[max],str);
   return 0;
}
