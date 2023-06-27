#include <stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the no  of rows in matrix:");
	scanf("%d",&m);
	printf("Enter the no of columns in a matrix:");
	scanf("%d",&n);
	int x[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element:");
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	}
