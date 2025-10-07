#include <stdio.h>

int main() {
    int n,sum = 0, odd;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    odd = 1; 

    for(int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2; 
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
