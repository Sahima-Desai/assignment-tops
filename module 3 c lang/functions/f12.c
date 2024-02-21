#include<stdio.h>
int main()
{
    char arr[100];
    int i;
    for(i=0;i<5;i++)

     printf("enter 5 names of students\n",i+1);
      for(i=0;i<5;i++)
     {
      scanf("%s",&arr[i]);
    }
    printf("5 names of student are :\n");
      for(i=0;i<5;i++)
    {
        printf(" %s\n",i+1,arr[i]);
    }
    return 0;
}
