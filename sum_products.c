#include <stdio.h>

int main() {
    int num, originalNum, digit, sumOfDigits = 0, productOfDigits = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num > 0) {
        
        digit = num % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sumOfDigits);
    printf("Sum of products of digits: %d\n", productOfDigits);

    return 0;
}

