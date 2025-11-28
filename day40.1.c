#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    // Read matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // 1. Upper half diagonals (starting from first row)
    for (int k = 0; k < cols; k++) {
        int i = 0, j = k;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // 2. Lower half diagonals (starting from last column)
    for (int k = 1; k < rows; k++) {
        int i = k, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
