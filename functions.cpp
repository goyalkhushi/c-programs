 #include <stdio.h>
void table(int n){
	int i;
for(i=1;i<=10;i++){
	printf("%d\n",i*n);
}
}
int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	table(n);
}
