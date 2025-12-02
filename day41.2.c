
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n')   // avoid printing the newline from fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
