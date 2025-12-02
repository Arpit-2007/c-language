#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // look on left side
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to find last occurrence
int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // look on right side
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(arr, n, target);
    int last  = lastOccurrence(arr, n, target);

    printf("First occurrence index: %d\n", first);
    printf("Last  occurrence index: %d\n", last);

    return 0;
}
