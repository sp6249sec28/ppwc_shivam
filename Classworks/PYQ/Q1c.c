#include <stdio.h>
void calculateEggs(int n){
	int gross = n/144;
	int remaining_after_gross = n%144;
	
	int dozen = remaining_after_gross/12;
	int remaining_after_dozen = remaining_after_gross % 12;
	
	printf("%d Gross\n%d Dozen\n%d Remaining eggs", gross, dozen, remaining_after_dozen);
}
int main(){
	int n;
	printf("Enter the number of eggs you have : ");
	scanf("%d", &n);
	calculateEggs(n);
	return 0;
}
