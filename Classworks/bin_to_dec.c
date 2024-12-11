#include <stdio.h>
#include <math.h>
int main(){
	int binary, decimal=0, power=0;
	printf("Enter a binary number : ");
	scanf("%d", &binary);
	
	while(binary != 0){
		int digit = binary%10;
		decimal = decimal + digit * pow(2, power);
		binary = binary/10;
		power++;
	}
	printf("The decimal number is : %d", decimal);
	return 0;
}
