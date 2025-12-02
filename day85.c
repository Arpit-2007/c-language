#include <stdio.h>

int main() {
    // Define enum with explicit values
    enum Status {
        SUCCESS = 10,
        FAILURE = 11,
        TIMEOUT = 12
    };

    // Print the assigned values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
