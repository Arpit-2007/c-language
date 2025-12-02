#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2))
        return 0;

    char temp[400];
    strcpy(temp, s1);
    strcat(temp, s1);  // s1 + s1

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[200], s2[200];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // remove newline
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (isRotation(s1, s2))
        printf("Strings are rotations.\n");
    else
        printf("Strings are not rotations.\n");

    return 0;
}
