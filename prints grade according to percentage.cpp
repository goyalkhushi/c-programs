#include <stdio.h>
int main()
{
	int ph,ch,bio,math,comp;
	printf("enter the marks of physics:");
	scanf("%d",&ph) ;
	printf("enter the marks of chemistry:");
	scanf("%d",&ch);
	printf("Enter the marks of biology:");
	scanf("%d",&bio);
	printf("Enter the marks of maths:");
	scanf("%d",&math);
	printf("Enter the marks of computer:");
	scanf("%d",&comp);
	float total=(ph+ch+bio+math+comp);
	float percentage=total/5;
	printf("Total marks of five subjects is %f\n",total);
	printf("the percentage of student is %f\n",percentage);
	if(percentage>=90){
		printf("Grade A");
	}
	else if(percentage>=80){
		printf("Grade B");
	}
	else if(percentage>=70){
		printf("Grade C");
	}
	else if(percentage>=60){
		printf("Grade  D");
	}
	else if(percentage>=40){
		printf("Grade E");
	}
	else if(percentage<40){
		printf("Grade F");
	}
}
