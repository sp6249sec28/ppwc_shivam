#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char findFirstRepetitiveChar(const char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = findFirstRepetitiveChar(str);

    if (result != '\0') {
        printf("The first repetitive character in the string \"%s\" is '%c'.\n", str, result);
    } else {
        printf("No repetitive characters found in the string \"%s\".\n", str);
    }

    return 0;
}

// Function to find the first repetitive character
char findFirstRepetitiveChar(const char str[]) {
    bool charSeen[256] = {false}; // ASCII character tracking array

    for (int i = 0; str[i] != '\0'; i++) {
        if (charSeen[(unsigned char)str[i]]) {
            return str[i]; // Return the first repetitive character
        }
        charSeen[(unsigned char)str[i]] = true;
    }

    return '\0'; // No repetitive characters found
}
