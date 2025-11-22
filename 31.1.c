#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search logic
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;   // stop after finding the element
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
