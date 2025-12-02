
#include <stdio.h>

int main() {
    // Enum with explicit and implicit integer values
    enum Example {
        A = 5,     // explicitly assigned
        B,         // auto: 6
        C = 10,    // explicitly assigned
        D          // auto: 11
    };

    // Print stored integer values
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
