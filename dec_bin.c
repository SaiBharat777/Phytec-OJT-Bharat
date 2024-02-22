#include <stdio.h>

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary: ");


    if (decimalNumber == 0) {
        printf("0\n");
        return 0;
    }

    while (decimalNumber > 0) {
        int bit = decimalNumber % 2;
        printf("%d", bit);
        decimalNumber /= 2;
    }

    printf("\n");

    return 0;
}

