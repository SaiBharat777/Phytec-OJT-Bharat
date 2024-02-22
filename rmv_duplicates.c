#include<stdio.h>

int main() {
    int arr[] = {1,1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

