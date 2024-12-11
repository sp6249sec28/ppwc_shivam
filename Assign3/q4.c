#include <stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]);

int main() {
    int arr1[] = {12, 20, 24, 32};
    int arr2[] = {7, 8, 65, 105};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArray[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    return 0;
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}
