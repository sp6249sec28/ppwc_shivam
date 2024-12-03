#include <stdio.h>

int main(){
    float x=6.7, y=1.2, z=2.3;
    float *p;

    p=&x;
    printf("Value of x is : %.2f\n", *p);
    
    p=&y;
    printf("Value of y is : %.2f\n", *p);
    
    p=&z;
    printf("Value of z is : %.2f\n", *p);
    return 0;
}