#include <stdio.h>
int main(){
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    int result = (x-1)/x;
    for(int i=2; i<9; i++){
        result += 0.5*(((x-1)/x)^i);
    }
    printf("Result is %d", result);
    return 0;
}