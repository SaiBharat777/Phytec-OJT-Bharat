#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger element is found
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}

