#include <stdio.h>

int main() {
    char choice, ch;
    int i, j, k, spaces;

    // Input the character choice
    printf("Enter the choice of the character: ");
    scanf("%c", &choice);

    // Calculate the number of rows based on the input character
    int rows = choice - 'A' + 1;

    // Outer loop for each row
    for (i = rows; i >= 1; i--) {
        // Print the first half (A to current row's last character)
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }

        // Print spaces in the middle
        spaces = (rows - i) * 2;
        for (k = 0; k < spaces; k++) {
            printf("  ");
        }

        // Print the second half (current row's last character to A)
        for (j = i - 1; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}
