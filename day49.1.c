#include <stdio.h>

int main() {
    char str[200];

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    // Print first letter (ignore leading spaces)
    int i = 0;
    while (str[i] == ' ') i++;  
    if (str[i] != '\0')
        printf("%c", str[i] >= 'a' && str[i] <= 'z' ? str[i] - 32 : str[i]);

    // Print letters after spaces
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            char ch = str[i+1];
            if (ch >= 'a' && ch <= 'z') ch -= 32; // uppercase
            printf("%c", ch);
        }
    }

    return 0;
}
