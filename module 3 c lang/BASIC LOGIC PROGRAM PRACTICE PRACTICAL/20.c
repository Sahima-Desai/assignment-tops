#include<stdio.h>
int main()
{
    float monthly_salary;
    float insurance_premium,loan_installment,remaining_salary;
    printf("enter monthly_salary");
    scanf("%f",&monthly_salary);
    insurance_premium=monthly_salary*10/100;
    loan_installment=monthly_salary*10/100;
    printf("insurance_premium is %f",insurance_premium);
    printf("loan_installment is %f",loan_installment);

    remaining_salary=monthly_salary-insurance_premium-loan_installment;
    printf("the remaining_salary is %f",remaining_salary);
    return 0;

}
