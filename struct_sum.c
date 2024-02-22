#include <stdio.h>

struct Number {
    int value;
};

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    struct Number numbers[n];

    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i].value);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i].value;
    }

    printf("Sum of numbers: %d\n", sum);

    return 0;
}

