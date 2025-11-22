#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Initialize largest and secondLargest
    int largest = -999999, secondLargest = -999999;

    for(i = 0; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -999999)
        printf("There is no second largest element (all elements equal).\n");
    else
        printf("Second largest element: %d\n", secondLargest);

    return 0;
}
