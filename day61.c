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

    // For each window
    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        // Check window arr[i ... i+k-1]
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0");

        if (i != n - k)
            printf(" ");
    }

    return 0;
}
