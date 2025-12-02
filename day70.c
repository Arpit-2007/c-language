#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase
    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    // Convert remaining characters to lowercase
    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);

    return 0;
}
