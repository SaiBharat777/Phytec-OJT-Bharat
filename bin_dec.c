#include<stdio.h>
int main() {
    int decimal = 0, binary, base = 1, rem, num;

    printf("Enter the binary number: ");
    scanf("%d", &num);

    binary = num; 

    while (num != 0) {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf("Binary: %d\nDecimal: %d\n", binary, decimal);

    return 0;
}

                                                                     
