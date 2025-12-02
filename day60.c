#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // For each window starting at i
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in window arr[i ... i+k-1]
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        // Print with spaces between values
        if (i > 0)
            printf(" ");
        printf("%d", max);
    }

    printf("\n");
    return 0;
}
