#include <stdio.h>

int main() {
    char s[500];
    printf("Enter string: ");
    scanf("%s", s);

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);

    return 0;
}
