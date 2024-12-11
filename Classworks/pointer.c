#include <stdio.h>

int main(){
	int x = 10;
	int *ptr = &x;
	printf("x = %d\n",x);
	printf("&x  = %u\n", &x);
	printf("ptr = %u\n", ptr);
	printf("*ptr = %d\n", *ptr);
	printf("*(&x) = %u\n", *(&x));
	printf("*(&ptr) = %u\n", *(&ptr));
	printf("**(&ptr) = %d\n", **(&ptr));
	return 0;
}
