#include <stdio.h>
void calculate_money(int a){
	int fifties = a/50;
	int rem1 = a%50;
	
	int twenties = rem1/20;
	int rem2 = rem1%20;
	
	int tens = rem2/10;
	
	printf("%d 50s, %d 20s and %d 10s notes", fifties, twenties, tens);
}

int main(){
	int amount;
	printf("Enter an amount : ");
	scanf("%d", &amount);
	calculate_money(amount);
	return 0;
}
