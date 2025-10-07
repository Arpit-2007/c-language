#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int Odd = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num; 

    while(num != 0) {
        digit = num % 10; 
        if(digit % 2 != 0) { 
            product *= digit;
            Odd = 1;
        }
        num /= 10; 
    }

    if(Odd)
        printf("Product of odd digits of %d = %d\n", n, product);
    else
        printf("No odd digits in %d\n", n);

    return 0;
}
