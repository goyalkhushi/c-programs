#include <stdio.h>
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	switch (x%2)
	{
		case 0:
			printf("number is even");
			break;
			case 1:
				printf("number is odd");
				break;
	}
}
