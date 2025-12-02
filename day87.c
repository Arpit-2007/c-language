#include <stdio.h>

int main() {
    // Define enum for user roles
    enum Role { ADMIN = 1, USER, GUEST };

    int role;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter choice: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
