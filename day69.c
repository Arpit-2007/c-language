#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Assuming elements are from 0 to n-1 or any positive range
    int max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max) max = arr[i];

    int seen[max + 1];
    for (int i = 0; i <= max; i++)
        seen[i] = 0;

    // One single iteration
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
