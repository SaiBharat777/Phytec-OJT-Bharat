#include <stdio.h>

int get_least_significant_bit(int num) {
    int lsb = num & 1;
    return lsb;
}

int main() {
    int number;
  
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = get_least_significant_bit(number);

    printf("The least significant bit of %d is: %d\n", number, result);

    return 0;
}
