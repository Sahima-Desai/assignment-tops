#include<stdio.h>
int main()
{
    int customer_id,unit_consumed;
    float amount_charge,subcharge,charge;
    char name[20];

    printf("enter customer_id");
    scanf("%d",&customer_id);
    printf("enter name");
    scanf("%s",&name);
    printf("enter the units consumed");
    scanf("%d",&unit_consumed);

    printf("\nCustomer IdNo is:%d\n",customer_id);
    printf("\nCustomer Name is:%s\n",name);
    printf("\nunits consumed are:%d\n",unit_consumed);
    if(unit_consumed<350)
    {
        charge=unit_consumed*1.20;
    }
    else if(unit_consumed>=350 && unit_consumed<600)
    {
        charge=unit_consumed*1.50;
    }
    else if(unit_consumed>=600 && unit_consumed<800)
    {
        charge=unit_consumed*1.80;
    }
    else if(unit_consumed>=800)
    {
        charge=unit_consumed*2.00;
    }
    if(charge>800)
    {
        subcharge=charge*0.18;
        amount_charge= 100;
    }
    amount_charge=charge+subcharge;
    printf("the total amount of the bill is: %d",amount_charge);

       return 0;
}






