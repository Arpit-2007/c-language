#include <stdio.h>

int main() {
    char filename[100];
    char text[300];
    FILE *fp;

    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Clear input buffer before using fgets()
    getchar();

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Get line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
