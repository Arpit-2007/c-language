#include <stdio.h>

int main() {
    // Define enum for menu choices
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

    int choice;
    float a, b;

    printf("=== MENU ===\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
