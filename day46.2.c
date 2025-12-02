#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   // frequency array for a–z

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2) {   // found repeating
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
