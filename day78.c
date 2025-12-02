#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file in read mode
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {

        ch = tolower(ch);  // make comparison easier

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for alphabet (consonant)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        // Ignore digits, spaces, punctuation, etc.
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
