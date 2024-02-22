#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator and numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Sum: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %.2lf\n", result);
            break;
        case '/':
            // Check if the second number is not zero to avoid division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}

