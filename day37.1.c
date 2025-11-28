#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];   // Array to store sum of each row

    // Read matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;   // Initialize for each row
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
