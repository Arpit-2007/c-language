#include <stdio.h>

int main() {
    int n, i, pos, elem;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];  // extra space for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &elem);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Convert to 0-based index
    pos = pos - 1;

    // Shift elements to the right
    for(i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert element
    arr[pos] = elem;
    n++;   // increase size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
