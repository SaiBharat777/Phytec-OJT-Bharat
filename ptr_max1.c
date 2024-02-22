#include<stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr;
    ptr = &arr[0];
    int max;
    max = *ptr;

    for (int i = 0; i < 10; i++) {
        if ((*(ptr + i)) > max) {
            max = (*(ptr + i));
        }
    }

    printf("The maximum value is %d\n", max);

    return 0;
}

