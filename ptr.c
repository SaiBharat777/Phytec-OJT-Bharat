#include <stdio.h>

int main() {
    int a[10];
    int b[10];
    int *ptr;
    ptr = a;

    // Input values into arrays 'a' and 'b'
    printf("Enter values for array 'a': ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter values for array 'b': ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    // Check if arrays 'a' and 'b' are the same
    int areEqual = 1; // Assume arrays are equal
    for (int i = 0; i < 10; i++) {
        if (a[i] != b[i]) {
            areEqual = 0; // Arrays are not equal
            break;
        }
    }

    if (areEqual) {
        printf("Arrays are the same.\n");
    } else {
        printf("Arrays are not the same.\n");
    }

    // Add corresponding elements of 'a' and 'b' and print the result
    printf("Resultant array after adding corresponding elements:\n");
    for (int i = 0; i < 10; i++) {
        ptr[i] = a[i] + b[i];
        printf("%d ", ptr[i]);
    }

    return 0;
}

