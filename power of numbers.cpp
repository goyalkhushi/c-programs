#include <stdio.h>
#include <math.h>
int main()
{
	int base,power,result;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter power:");
	scanf("%d",&power);
	result=pow(base,power);
	printf("Result is %d",result);
}
