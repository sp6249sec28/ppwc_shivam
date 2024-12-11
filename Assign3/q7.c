#include <stdio.h>
#include <stdbool.h>

// Function prototype
void copyDistinctElements(int input[], int size, int output[], int *outputSize);

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(input) / sizeof(input[0]);
    int output[size]; // Output array (max size same as input)
    int outputSize = 0; // To store the size of the output array

    // Call the function to copy distinct elements
    copyDistinctElements(input, size, output, &outputSize);

    // Print the output array
    printf("Output array with distinct elements: ");
    for (int i = 0; i < outputSize; i++) {
        printf("%d ", output[i]);
    }

    return 0;
}

// Function to copy distinct elements to another array
void copyDistinctElements(int input[], int size, int output[], int *outputSize) {
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check if input[i] is already in the output array
        for (int j = 0; j < *outputSize; j++) {
            if (input[i] == output[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If input[i] is not in the output array, add it
        if (!isDuplicate) {
            output[*outputSize] = input[i];
            (*outputSize)++;
        }
    }
}
