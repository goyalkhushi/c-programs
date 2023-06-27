#include <stdio.h>
int main()
{
	int x;
	printf("enter a  number:");
	scanf("%d",&x);
	if(x>0){
	printf("x is positive");
	}
	else if(x<0){
		printf("x is negative");
	}
	else
	{
		printf("x is zero");
	}
}
