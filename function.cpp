#include <stdio.h>
void indian(){
	printf("Namasate\n");
}
void french(){
	printf("Bonjour");
}
int main(){
	char ch;
	printf("enter character:");
	scanf("%ch",&ch);
	if(ch=='i'){
		indian();
	}
	else if(ch=='f'){
		french();
	}
	else{
		printf("hello");
	}
}
