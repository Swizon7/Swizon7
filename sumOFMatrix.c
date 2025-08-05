#include <stdio.h>

int main() {
    int m, n, i, j;
    
    // Input dimensions of matrices
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    
    // Check for valid dimensions
    if (m <= 0 || n <= 0) {
        printf("Invalid matrix dimensions!\n");
        return 1;
    }
    
    // Declare two matrices and result matrix
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    
    // Input elements of first matrix
    printf("Enter elements of first matrix (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input elements of second matrix
    printf("Enter elements of second matrix (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Compute sum of matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Print the sum matrix
    printf("Sum of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}