#include <stdio.h>

int main() {
    int arr[] = {11, 22, 34, 45, 56, 67, 78, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 67;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            result = mid;
            break;
        }
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1)
        printf("Element %d is present at index %d\n", key, result);
    else
        printf("Element %d is not present in the array\n", key);

    return 0;
}

