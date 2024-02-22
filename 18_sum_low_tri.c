#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int size, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    

    int matrix[MAX_SIZE][MAX_SIZE];

    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of lower triangle elements: %d\n", sum);

    return 0; 
}

