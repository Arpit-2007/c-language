#include <stdio.h>

int main() {
    char filename[100];
    char ch;
    FILE *fp;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check for error (file not found)
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }

    // File exists → read and display its content
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);

    return 0;
}
