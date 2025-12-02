#include <stdio.h>

int main() {
    char str[200], rev[200];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length
    while (str[len] != '\0') {
        len++;
    }

    // remove newline if present
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    // reverse
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
