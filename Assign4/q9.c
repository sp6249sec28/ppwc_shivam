#include <stdio.h>

int main() {
    int arr1[] = {10, 13, 20, 33, 44};
    float arr2[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    printf("First Array:\n");
    printf("INDEX\t\tADDRESS\t\tVALUE\n\n");
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        printf("%d\t\t%d\t\t%d\n", i, arr1 + i, *(arr1 + i));
    }

    printf("\nSecond Array:\n");
    printf("INDEX\t\tADDRESS\t\tVALUE\n\n");
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        printf("%d\t\t%d\t\t%.1f\n", i, arr2 + i, *(arr2 + i));
    }

    return 0;
}