#include <stdio.h>

int main() {
    int integerVar = 5;
    float floatVar = 2.5;

    // Implicit conversion (int to float)
    float result = integerVar + floatVar;

    // Display the result
    printf("Result: %f\n", result);

    return 0;
}

