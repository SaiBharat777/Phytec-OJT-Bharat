#include <stdio.h>

int main() {
    int rows = 3;  
    int i, j, k = 1;

   
    for (i = 1; i <= rows; i++) {
        
        for (j = i; j < rows; j++) {
            printf("   ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%2d", k++);
            if (j < 2 * i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    
    for (i = rows - 1; i >= 1; i--) {
        
        for (j = rows; j > i; j--) {
            printf("   ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%2d", k++);
            if (j < 2 * i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
