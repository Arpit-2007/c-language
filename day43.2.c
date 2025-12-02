#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets
    int len = 0;
    while (str[len] != '\0') len++;
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}
