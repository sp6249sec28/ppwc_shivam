//pseudocode
/*int length(char *str){
int len=0;
while(s[len] ){
	++len;
}
return len;
}*/

#include <stdio.h>

int length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

int main() {
    char str[] = "Hello, World!";
    int len = length(str);
    printf("Length of the string is: %d\n", len);
    return 0;
}
