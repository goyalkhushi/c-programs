#include <stdio.h>
int main()
{
	float ph,ch,ma,eng,c,total,avg,percentage;
	printf("Enter physics  marks:");
	scanf("%f",&ph);
	printf("Enter chemistry marks:");
	scanf("%f",&ch);
	printf("Enter maths marks:");
	scanf("%f",&ma);
	printf("Enter english marks:");
	scanf("%f",&eng);
	printf("Enter c programming:");
	scanf("%f",&c);
	total=ph+ch+ma+eng+c;
	avg=total/5;
	percentage=(total/500)*100;
	printf("Total is %f\n",total);
	printf("Average is %f\n",avg);
	printf("Percentage is %f\n",percentage);
	
	
}
