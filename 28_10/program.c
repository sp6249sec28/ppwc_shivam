#include <stdio.h>

int main(){
    int item, product = 1; //Let the initial value of product be 1
        

    // (a) If item is nonzero, then multiply product by item and save the result in product ; other-
    // wise, skip the multiplication. In either case, print the value of product

    printf("Enter item value : ");
    scanf("%d", &item);

    if (item != 0) {
        product *= item;
    }
    printf("Product: %d\n", product);

    // (b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or
    // (y - x ), whichever is positive. Do not use the abs or fabs function in your solution.
    
    int x,y;
    printf("Enter x and y values: ");
    scanf("%d %d", &x, &y);

    y = (x > y) ? (x - y) : (y - x);
    printf("Absolute difference (stored in y): %d\n", y);

    // (c)  If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 ,
    // add x to plus sum.

    int a, zerocount=0, minus_sum=0, plus_sum=0;
    printf("Enter x value for condition check: ");
    scanf("%d", &a);

    if (a == 0) {
        zerocount++;
    } else if (a < 0) {
        minus_sum += a;
    } else {
        plus_sum += a;
    }

    printf("Zero count: %d\n", zerocount);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);
    return 0;
}