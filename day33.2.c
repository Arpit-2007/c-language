#include <stdio.h>

int main() {
    int n, i, elem;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 to allow space for new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &elem);

    // Find correct position from right side
    i = n - 1;
    while(i >= 0 && arr[i] > elem) {
        arr[i + 1] = arr[i];  // shift right
        i--;
    }

    // Insert at correct position
    arr[i + 1] = elem;
    n++;  // new size increases

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
