#include <stdio.h>
int main(){
	double basic1 = 40000.00;
	double basic2 = 50000.00;
	double hra;
	double da;
	double gross;
	double bonus = 25000.00;
	
	int a;
	printf("How much graduated you are(1 for UG/2 for PG) : ");
	scanf("%d", &a);
	
	int year;
	printf("Enter your experience in years : ");
	scanf("%d", &year);
	switch(a){
		case 1:
			hra = 0.25*basic1;
			da = 0.7*basic1;
			gross = basic1 + hra + da;
			if(year < 3){
				printf("The gross salary is %f\n", gross);
			}
			else{
				printf("The gross salary is %f\n", gross+bonus);
			}
			break;
		case 2:
			hra = 0.4*basic2;
			da = 0.9*basic2;
			gross = basic2 + hra + da;
			if(year < 3){
				printf("The gross salary is %f\n", gross);
			}
			else{
				printf("The gross salary is %f\n", gross+bonus);
			}
			break;
		default:
			printf("!!!");
			break;
	}
}
