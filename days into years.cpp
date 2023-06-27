#include <stdio.h>
int main()
{
	int days,weeks,years;
	printf("enter days:");
	scanf("%d",&days);
	years=days/365;
	days%=7;
	weeks=days/7;
	days%=7;
	printf("%d days %d weeks %d days",years,weeks,days);
}
