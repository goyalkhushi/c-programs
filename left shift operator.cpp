#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any number:");
	scanf("%d",&a);
	printf("Enter bit value:");
	scanf("%d",&b);
	c=a<<b;
	printf("%d",c);
}
