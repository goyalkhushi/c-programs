#include<stdio.h>
int main(){
	char ch;
	printf("Enter character: ");
	scanf("%ch",&ch);
 	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
		printf("Character is an alphabet");
	}
	else{
		printf("Character is not alphabet");
	}
}
