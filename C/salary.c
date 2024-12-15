#include<stdio.h>
void main()
{
    float BaseSalary,Total;
    float Allowance,PF,GrossS,HRA,Tax;

// Gross salary = Basic salary + HRA + Other allowances
//Take-home Salary = Gross Salary – Income Tax – Employee's PF contribution (PF) – Professional Tax

printf("Enter The Basic salary = ");
scanf("%f",&BaseSalary);
printf("PF = ");
scanf("%f",&PF);
printf("HRA = ");
scanf("%f",&HRA);
printf("Allowance = ");
scanf("%f",&Allowance);
printf("Tax = ");
scanf("%f",&Tax);

GrossS=BaseSalary+(HRA/100*BaseSalary)+Allowance;
printf("Gross salary = %f",GrossS);

Total= GrossS -((Tax/100*BaseSalary)+PF);
printf("\nTotal Salary = %f ",Total);


}
