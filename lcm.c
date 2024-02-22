#include <stdio.h>

int main() {
    int num1, num2;

    // Example: Let's use the numbers 12 and 18
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int maxNum = (num1 > num2) ? num1 : num2;
    int lcm;

    // Find the LCM
    for (lcm = maxNum; ; lcm++) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }

    // Print the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

