#include <stdio.h>
int main(){
	int year;
	printf("");
	scanf("");
	if(year%4 == 0 || year%400 == 0){
	printf("%d is a leap year", year);
	}
	else if (year%100 == 0){
	printf("%d is not a leap year", year);
	}
}
// Are you shure this code is correct ?
