#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char words[20][50];
    int count = 0, i = 0, j = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    // Split the string into words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            if (j > 0) {    // end of a word
                words[count][j] = '\0';
                count++;
                j = 0;
            }
        } else {
            words[count][j++] = str[i];
        }
    }

    // Print initials for all except last word
    for (i = 0; i < count - 1; i++) {
        char ch = words[i][0];
        if (ch >= 'a' && ch <= 'z') ch -= 32; // uppercase
        printf("%c. ", ch);
    }

    // Print last word (surname) fully
    printf("%s\n", words[count - 1]);

    return 0;
}
