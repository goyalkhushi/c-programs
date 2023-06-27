#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number till n number:");
	scanf("%d",&n);
	printf("all the numbers from 1 to n is %d:");
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	i++;
}
