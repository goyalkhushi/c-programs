#include <stdio.h>
int main()
{
	int x ;
	printf("Enter first number:");
	scanf("%d",&x);
	if(x%5==0){
		printf("number is divisible by 5 ");
	}
	else if(x%11==0){
		printf("number is divisible by  11");
	}
	else{
		printf("number is not divisible by 5 or 11");
	}
}
