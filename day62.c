#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the previous sum or start fresh
        if (maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        // Track global maximum
        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("%d\n", maxSoFar);

    return 0;
}
