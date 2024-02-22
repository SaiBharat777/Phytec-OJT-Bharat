#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    // Check if there are exactly three command-line arguments (program name, num1, num2)
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1; // Return non-zero to indicate an error
    }

    // Convert command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Perform multiplication
    int result = num1 * num2;

    // Display the result
    printf("Multiplication result: %d\n", result);

    return 0;
}

