#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base of triangle:");
	scanf("%f",&base);
	printf("Enter height:");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("area of triangle is %f",area);
}
