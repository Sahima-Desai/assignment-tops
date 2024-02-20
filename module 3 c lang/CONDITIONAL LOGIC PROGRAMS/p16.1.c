#include<stdio.h>
int main()
{
    int temperature;
    printf("enter the temperature in celsius\n");
    scanf("%d",&temperature);
    if(temperature<0)
    {
        printf("it is a freesing weather");
    }
    if((temperature>=0)&&(temperature<10))
    {
        printf("it is very cold weather");
    }
    if((temperature>=10)&&(temperature<20))
    {
        printf("it is cold weather");
    }
    if((temperature>=20)&&(temperature<30))
    {
        printf("it is normal");
    }
    if((temperature>=30)&&(temperature<40))
    {
        printf("it is hot weather");
    }
    if(temperature>=40)
    {
        printf("it is very hot weather");
    }
    return 0;
}
