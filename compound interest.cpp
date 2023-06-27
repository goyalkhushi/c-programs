#include <stdio.h>
int main()
{
	float p,r,t,ci;
	printf("Enter principal:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	ci=p*r*t;
	printf("Enter compound interest of amount is %f\n",ci);
	
}
