#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pge[n];

    // For each element, search to the left for the first greater element
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        pge[i] = prev;
    }

    // Print comma-separated output
    for (int i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i != n - 1)
            printf(",");
    }

    return 0;
}
