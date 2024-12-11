#include <stdio.h>
#define SQR(x) (x*x)
int main() {
	int a = 10;
	if(a=5){  //if(a==5) checks if a has value 5  //this statement assigns value 5 to a
		printf("%d\n", SQR(a));
	}
	return 0;
}
