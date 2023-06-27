#include <stdio.h>
int main()
{
	int basic_salary,gross_salary;
	float da,hra;
	printf("Enter the basic salary of employee:");
	scanf("%d",&basic_salary);
	if(basic_salary<=10000){
		da=basic_salary*0.80;
		hra=basic_salary*0.20;
		gross_salary=basic_salary+hra+da;
		printf("The gross salary of employee is %d",gross_salary);
	}
	else if(basic_salary<=20000){
		da=basic_salary*0.90;
		hra=basic_salary*0.25;
		gross_salary=basic_salary+da+hra;
		printf("The gross salary of employee is %d",gross_salary);
	}
	else if (basic_salary>20000){
		da=basic_salary*0.95;
		hra=basic_salary*0.30;
		gross_salary=basic_salary+da+hra;
		printf("The gross salary of employee is %d",gross_salary);
	}
}
