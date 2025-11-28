#include <stdio.h>

int main() {
    int n, sum = 0;

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

    // Sum main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    // Result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
