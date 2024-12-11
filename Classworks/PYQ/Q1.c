#include <stdio.h>
int main(){
	float side, area;
	printf("Enter side of square : ");
	scanf("%f", &side);
	area = side*side;
	printf("The area of a square whose side length is %f cm is %.2f square cm.", side, area);
	
	return 0;
}
