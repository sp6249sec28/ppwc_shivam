#include <stdio.h>
int main(){
	float n;
	int sum = 0;
	
	printf("Enter a number : ");
	scanf("%f", &n); 
	
	//Separate the integer and decimal part
	int num = int(n);
	float decimal = n-num; //Subtract the decimal part
	
	//Calculate the sum of integer part
	while(num!=0){
		sum += num%10;
		num /= 10;
	}
	//Calculate the sum of decimal part
	while(decimal!=0){
		decimal *= 10; //Shift the decimal to right by one place
		int digit = (int)decimal; //Extract the integer part
		sum += digit; //Add the integer part to sum
		decimal -= digit; //Remove extracted digit
		decimal = (float)((int)(decimal*100))/100; //Round to 2 decimal places
	} 
	
	printf("The sum of digits is %d\n", sum);
	return 0;
}
