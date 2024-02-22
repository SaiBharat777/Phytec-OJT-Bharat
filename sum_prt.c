#include <stdio.h>

int main() {
    int num, originalNum, digit, sumOfDigits = 0, productOfDigits = 1;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Preserve the original number
    originalNum = num;

    // Calculate the sum and product of digits
    while (num > 0) {
        // Extract the last digit
        digit = num % 10;

        // Update the sum and product
        sumOfDigits += digit;
        productOfDigits *= digit;

        // Remove the last digit
        num /= 10;
    }

    // Display the sum of digits
    printf("Sum of digits: %d\n", sumOfDigits);

    // Display the sum of products of digits
    printf("Sum of products of digits: %d\n", productOfDigits);

    return 0;
}

