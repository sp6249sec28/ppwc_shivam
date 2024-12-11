#include <stdio.h>
int main(){
	int n;
	int sum = 0;
	printf("Enter a number : ");
	scanf("%d", &n); 
	while(n>0){
		int digit = n%10;
		sum += digit;
		n = n/10;
	}
	printf("The sum of digits is %d", sum);
}
