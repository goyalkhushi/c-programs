#include <stdio.h>
int main()
{
	char ch;
	printf("Enter character: ");
	scanf("%ch",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("%c character is alphabet",ch);
	}
	else if (ch>='0' &&ch<='9')
	{
		printf("%c the character is digit",ch);
	}
		else{
		printf("%c character is special character",ch);
	}
}
