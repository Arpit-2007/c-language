#include <stdio.h>

int main() {
    int n, isDistinct = 1;

    // Input size of square matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];
    int diag[n];

    // Read matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Store diagonal elements in array
    for (int i = 0; i < n; i++) {
        diag[i] = A[i][i];
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    // Result
    if (isDistinct)
        printf("\nall diagonal elements are distinct.\n");
    else
        printf("\ndiagonal elements are not distinct.\n");

    return 0;
}
