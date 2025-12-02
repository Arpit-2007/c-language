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

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    int currSum = 0;

    // Sum of first window of size k
    for (int i = 0; i < k; i++)
        currSum += arr[i];

    int maxSum = currSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        currSum += arr[i];        // add next element
        currSum -= arr[i - k];    // remove first element of previous window

        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
