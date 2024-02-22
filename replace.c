#include <stdio.h>

int main() {
    int number, originalNumber, replacedNumber = 0;
    int multiplier = 1;

  
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

   
    while (number > 0) {
        int digit = number % 10;
        replacedNumber += (digit == 0 ? 1 : digit) * multiplier;
        number /= 10;
        multiplier *= 10;
    }

    
    printf("Original number: %d\n", originalNumber);
    printf("Number after replacing 0's with 1's: %d\n", replacedNumber);

    return 0;
}

