#include <stdio.h>
void bubbleSort(int arr[], int size);
int main() {
    int arr[] = {3, 2, 5, 4, 8, 7};
    bubbleSort(arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
void bubbleSort(int arr[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - (pass + 1); i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap using a temporary variable
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
