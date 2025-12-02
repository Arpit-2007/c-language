#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }

    // Read each character, convert, and write
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;    // convert to uppercase

        fputc(ch, out);
    }

    // Close both files
    fclose(in);
    fclose(out);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}
