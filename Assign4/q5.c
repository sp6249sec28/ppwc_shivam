#include <stdio.h>
int main(){
    int a=12, b=25, c=18;
    int *ptr;

    ptr=&a;
    *ptr+=10;
    printf("Value of a is : %d\n", a);   //*ptr = a
    
    ptr=&b;
    *ptr+=10;
    printf("Value of b is : %d\n", b);   //*ptr = b
    
    ptr=&c;
    *ptr+=10;
    printf("Value of c is : %d\n", c);   //*ptr = c

    return 0;
}