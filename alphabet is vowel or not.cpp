#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%d",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("%ch character is vowel");
	}
	else{
		printf("character is consonant");
	}
}
