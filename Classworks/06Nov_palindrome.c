#include <stdio.h>
#include <string.h>
int checkPalindrome(char str[]){
	int left = 0;
	int right = strlen(str) - 1;
	while(left<right){
		if (str[left] != str[right]){
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}
int main(){
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	if (checkPalindrome(str)){
		printf("String is palindrome.\n");
	}
	else {
		printf("String is not palindrome.\n");
	}
	return 0;
}
