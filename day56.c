#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int nge[n];

    // Brute force: for each element, look to the right
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;          // nearest greater found
            }
        }
        nge[i] = next;
    }

    // Print comma-separated
    for (int i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i != n - 1)
            printf(",");       // comma between elements
    }

    return 0;
}
