#include <stdio.h>

int main(){
	int x = 10;
	int *ptr = &x;
	int *ptr1 = &x;
	printf("ptr = %u\n", ptr);
	printf("ptr1 = %u\n", ptr1);
	int y = *ptr++;
	int z = *(ptr1++);
	printf("*ptr++ : %d\n", y);
	printf("*(ptr++) : %d\n", z);
	printf("ptr : %u\n", ptr);
	printf("ptr1 : %u\n", ptr1);
}
