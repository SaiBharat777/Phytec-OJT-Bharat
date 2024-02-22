#include <stdio.h>
#include <stdlib.h>

int main() {
    long long binaryNumber;
    char hexNumber[100];
    int hexIndex = 0, remainder, quotient;

    // Get input for a binary number from the user
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    // Convert binary to hexadecimal
    while (binaryNumber != 0) {
        remainder = binaryNumber % 16;
        if (remainder < 10) {
            hexNumber[hexIndex++] = remainder + '0';
        } else {
            hexNumber[hexIndex++] = remainder + 'A' - 10;
        }
        binaryNumber /= 16;
    }

    // Reverse the hexNumber array
    for (int i = 0, j = hexIndex - 1; i < j; i++, j--) {
        char temp = hexNumber[i];
        hexNumber[i] = hexNumber[j];
        hexNumber[j] = temp;
    }

    // Print the hexadecimal equivalent
    printf("Hexadecimal equivalent: 0x%s\n", hexNumber);

    return 0;
}

