#include <stdio.h>
#include <stdbool.h>

// Function prototype
void difference(int p[], int sizeP, int q[], int sizeQ, int result[], int *resultSize);

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};
    int sizeP = sizeof(p) / sizeof(p[0]);
    int sizeQ = sizeof(q) / sizeof(q[0]);
    int result[sizeP]; // Resultant array (max size same as p)
    int resultSize = 0; // To store the size of the result array

    // Call the difference function
    difference(p, sizeP, q, sizeQ, result, &resultSize);

    // Print the result
    printf("Difference (p - q): ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

// Function to find the difference between two arrays
void difference(int p[], int sizeP, int q[], int sizeQ, int result[], int *resultSize) {
    for (int i = 0; i < sizeP; i++) {
        bool found = false;

        // Check if p[i] exists in q
        for (int j = 0; j < sizeQ; j++) {
            if (p[i] == q[j]) {
                found = true;
                break;
            }
        }

        // If p[i] is not in q, add it to the result array
        if (!found) {
            result[*resultSize] = p[i];
            (*resultSize)++;
        }
    }
}
