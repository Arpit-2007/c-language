#include <stdio.h>

int main() {
    // Define enum
    enum Roles { ADMIN = 10, USER, GUEST };

    // Array of enum names (must match order)
    const char *names[] = { "ADMIN", "USER", "GUEST" };

    // Total number of enum values
    int total = sizeof(names) / sizeof(names[0]);

    // Print names and values
    for (int i = 0; i < total; i++) {
        printf("%s = %d\n", names[i], ADMIN + i);
    }

    return 0;
}
