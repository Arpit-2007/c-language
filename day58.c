#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Step 1: Prefix product
    answer[0] = 1;
    for (int i = 1; i < n; i++)
        answer[i] = answer[i - 1] * nums[i - 1];

    // Step 2: Multiply with suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix;
        suffix *= nums[i];
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(" ");
    }

    return 0;
}
