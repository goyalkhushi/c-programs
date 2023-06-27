#include <stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter no of rows in a matrix:");
	scanf("%d",&m);
	printf("Enter no of columns in a matrix:");
	scanf("%d",&n);
	int x[m][n];
	int y[m][n];
	int z[m][n];
	int a[m][n];
	int b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter elements:");
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element:");
			scanf("%d",&y[i][j]);
		}
	}
	printf("sum of a matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			 z[i][j]=x[i][j]+y[i][j];
			printf("%d\t",z[i][j]);
		}
		printf("\n");
	}
	printf("subtraction of a mtrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		a[i][j]=x[i][j]-y[i][j];
			printf("%d\t",a[i][j]);
			}
			printf("\n");
	}
	printf("multiplication of a matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
	 b[i][j]=x[i][j]*y[i][j];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
