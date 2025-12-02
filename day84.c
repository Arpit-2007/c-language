#include <stdio.h>

int main() {
    // Define enumeration
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    // Example: set current status
    enum Status result = SUCCESS;

    // Print message based on status
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}
