#include <stdio.h>
int main()
{
	int num1,num2;
	float results;
	char op;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("enter any operations (+,-,*,/):");
	scanf("%f",&op);
	printf("Enter second number:");
	scanf("%d",&num2);
	switch(op)
	{
		case '+':
			results=num1+num2;
			break;
			case '-':
				results=num1-num2;
				break;
				case '*':
					results=num1*num2;
					break;
					case'/':
						results=num1/num2;
						break;
						default:
							printf("enter valid operation");
	}
}
