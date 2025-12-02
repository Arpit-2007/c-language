#include <stdio.h>

int main() {
    // Define enum for gender
    enum Gender { MALE, FEMALE, OTHER };

    // Define struct with enum field
    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    // Input person's details
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    // Print person's gender
    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid Gender\n");
    }

    return 0;
}

