#include <stdio.h>

int main() {
    int n, i, product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        product *= i;
    }

    printf("Product = %d\n", product);
    return 0;
}

