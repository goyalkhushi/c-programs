#include <stdio.h>
int main()
{
	float tempC,tempF;
	printf("Enter temperature:");
	scanf("%f",&tempF);
	tempC=(tempF-32)*5/9;
	printf("Temperature in c is %f",tempC);
	}
