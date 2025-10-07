#include <stdio.h>

int main() {
    int num, remainder, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num; 

    if(num == 0) {
        printf("Binary of %d = 0\n", n);
        return 0;
    }

    while(num > 0) {
        remainder = num % 2;         
        binary = binary + remainder * place; 
        place = place * 10;          
        num = num / 2;          
       }

    printf("Binary of %d = %d\n", n, binary);

    return 0;
}
