#include <stdio.h>

int main() {
    char s[500], t[500];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int freq[26] = {0};

    // Count characters of s
    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Subtract characters of t
    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    // Check if all zeros
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
