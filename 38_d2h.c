#include <stdio.h>

void decimalToHexadecimal(int decimalNumber) {
    char hexadecimalNumber[20];
    int i = 0;

   
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;

       
        if (remainder < 10) {
            hexadecimalNumber[i] = remainder + '0';
        } else {
            hexadecimalNumber[i] = remainder - 10 + 'A';
        }

        decimalNumber /= 16;
        i++;
    }

    
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimalNumber[j]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decimalToHexadecimal(decimalNumber);

    return 0;
}

