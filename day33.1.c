#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } 
        else if(arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if(!found)
        printf("Element not found in array.\n");

    return 0;
}
