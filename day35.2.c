#include <stdio.h>

// Function to reverse part of array
void reverse(int arr[], int start, int end) {
    int temp;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    // Important: handle k > n
    k = k % n;

    // Step 1: Reverse whole array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse remaining elements
    reverse(arr, k, n - 1);

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
