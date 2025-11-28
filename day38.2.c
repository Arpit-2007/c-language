#include <stdio.h>

int main() {
    int n, isSymmetric = 1;

    // Input size of square matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n];

    // Read matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Result
    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
