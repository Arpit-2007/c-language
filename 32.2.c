#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};   // to store frequency of digits 0-9
    int digit, maxDigit = 0, i;
    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if(num < 0) num = -num;

    // Count digits
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum occurrences
    for(i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("Occurrences: %d\n", freq[maxDigit]);

    return 0;
}
