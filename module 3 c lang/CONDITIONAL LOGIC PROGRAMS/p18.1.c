#include<stdio.h>
int main()
{
    float costprice,sellingprice,profit,loss;
    printf("enter the costprice and sellingprice\n");
    scanf("%f %f",&costprice,&sellingprice);
    if(costprice>sellingprice)
    {
        printf("there is a loss\n");
        loss=costprice-sellingprice;
        printf("loss is of %f\n",loss);
    }
    if(sellingprice>costprice)
    {
        printf("there is a profit\n");
        profit=sellingprice-costprice;
        printf("profit is of %f\n",profit);
    }
    return 0;
}
