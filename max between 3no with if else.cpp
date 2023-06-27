#include <stdio.h>
int main()
{
	int x,y,z;
	printf("Enter first number :");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	printf("Enter third number:");
	scanf("%d",&z);
	if(x>y&&x>z){
		printf("x is maximun than other two  numbers:");
	}
	else if(y>z&&y>x){
		printf("y is maximum than two number:");
	}
	else
	{
		printf("z is maximum than other than two numbers:");
	}
}
