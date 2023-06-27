#include <stdio.h>
int main()
{
	char ch;
	printf("enter the character :");
	scanf("%ch",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("character is uppercase",ch);
	}
	else if (ch>='a'&&ch<='z'){
		printf("character is lowercase",ch);
	}
	else{
		printf("character is not an alphabet");
	}
}
