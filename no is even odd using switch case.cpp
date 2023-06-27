#include <stdio.h>
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	switch(x>0)
	{
			case 1:
				printf("number is neagtive");
				break;
				case 0:
					switch(x<0)
					{
						case 1:
							printf("number is negative");
							break;
							case 0:
								printf("number is zero");
								break;
					}
	}
}
