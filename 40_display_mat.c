#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

   
    printf("Enter the number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);

    printf("Enter the number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0 || rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Invalid input for rows or columns.\n");
        return 1;
    }

    int matrix[MAX_ROWS][MAX_COLS];

    
    inputMatrix(matrix, rows, cols);


    displayMatrix(matrix, rows, cols);

    return 0;
}

