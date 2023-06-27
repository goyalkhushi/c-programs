#include <stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers to find maximum:");
	scanf("%d%d",&x,&y);
	switch(x>y)
	{
		/* if (x>y) is false*/
		case 0:
		printf("%d is maxaimum",y);
		break;
		/* if x>y is true */
		case 1:
		printf("%d is maximum",x);
		break;
	}
}
