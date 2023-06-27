#include <stdio.h>
int main()
{
	int i,n,c;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		c=i*n;
		printf("%d\n",c);
	}
}
