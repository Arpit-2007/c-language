#include <stdio.h>

int main() {
    // Define enumeration for days
    enum Day {
        SUNDAY,     // 0
        MONDAY,     // 1
        TUESDAY,    // 2
        WEDNESDAY,  // 3
        THURSDAY,   // 4
        FRIDAY,     // 5
        SATURDAY    // 6
    };

    // Print each day with its integer value
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}
