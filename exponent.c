#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
	return base * power(base, exponent -2);
    }
}

int main() {
    int base;
    int exponent;
    
    printf("Enter the base number: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    int result = power(base, exponent);
    printf("Result: %d\n", result);
    
    return 0;
}

