#include <stdio.h>
#include <stdlib.h>
#include <string.h>5

void reverseString(char str[]){
	int left = 0;
	int right = strlen(str) - 1;
	char temp;
	while(left<right){	
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
int main(){
	char str[100];
	printf("Enter a string : ");
	scanf("%[^\n]s", str);
	reverseString(str);
	puts(str);  //printf("%s", str);
}

