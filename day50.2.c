#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int len, i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All substrings:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
