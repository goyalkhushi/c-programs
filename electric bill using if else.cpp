#include <stdio.h>
int main(){
	int unit;
	float charge;
	printf("enter the unit  per electricity:");
	scanf("%d",&unit);
	/*additional charge is 20% */
	if(unit<=50){
	 charge=unit*0.50;
		printf("The electric bill is %f Rs.",charge);
		printf("\n");
	}
	else if(unit<=150){
	 charge=25+unit*0.75;
	 printf("The electric bill is %f Rs.",charge);
	 printf("\n");
	}
	else if (unit<=250){
		charge=100+unit*1.20;
		printf("The electric bill is %f Rs.",charge);
		printf("\n");
	}	
	else if(unit>250){
		charge=220+unit*1.50;
		printf("The electric bill is %f  Rs.",charge);
		printf("\n");
	}
	float additional_charge=charge*0.20;
	printf("The electcity bill after adding additional charge is  %f\n",additional_charge);
	float total_amt=charge+additional_charge;
	printf("the total amount of bill is  %f",total_amt);
	
}
