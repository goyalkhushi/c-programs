#include <stdio.h>
int main()
{
	float x,y,z;
	printf("enter length in centimeter ");
	scanf("%f",&x);
	y=x/100;
	printf("length in  meter is %f\n",y);
	z=x/100000;
	printf("length in kilometer is %f\n",z);
	
}
