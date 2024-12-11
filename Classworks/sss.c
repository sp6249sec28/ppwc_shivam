#include <stdio.h>

int main() {
    float num;
    int beforeDecimal = 0, afterDecimal = 0, digit;
    int intPart, fracPart;

    // Input the floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Separate the integer part and fractional part
    intPart = (int)num;  // Extract the integer part
    fracPart = (int)((num - intPart) * 1000000);  // Multiply to handle fractional part

    // Sum digits of the integer part
    while (intPart != 0) {
        digit = intPart % 10;
        beforeDecimal += digit;
        intPart /= 10;
    }

    // Sum digits of the fractional part
    while (fracPart != 0) {
        digit = fracPart % 10;
        afterDecimal += digit;
        fracPart /= 10;
    }

    // Output the result
    printf("Sum of digits before decimal: %d\n", beforeDecimal);
    printf("Sum of digits after decimal: %d\n", afterDecimal);

    return 0;
}

