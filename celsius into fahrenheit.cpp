#include <stdio.h>
int main()
{
	float tempC,tempF;
	printf("Enter temperature:");
	scanf("%f",&tempC);
	tempF=(9*tempC)/5+32;
	printf("Temperature in F is %f",tempF);
}
