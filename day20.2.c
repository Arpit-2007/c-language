#include <stdio.h>

int main() {
    char binary[50]; 
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");

    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            printf("1"); 
        else if(binary[i] == '1')
            printf("0");  
        else {
            printf("\nInvalid input! Only 0 and 1 are allowed.\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
