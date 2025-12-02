#include <stdio.h>

int main() {
    // Enum for months
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    // Array of days in each month (non-leap year)
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    // Print days for each month
    printf("JANUARY = %d days\n", days[JANUARY]);
    printf("FEBRUARY = %d days\n", days[FEBRUARY]);
    printf("MARCH = %d days\n", days[MARCH]);
    printf("APRIL = %d days\n", days[APRIL]);
    printf("MAY = %d days\n", days[MAY]);
    printf("JUNE = %d days\n", days[JUNE]);
    printf("JULY = %d days\n", days[JULY]);
    printf("AUGUST = %d days\n", days[AUGUST]);
    printf("SEPTEMBER = %d days\n", days[SEPTEMBER]);
    printf("OCTOBER = %d days\n", days[OCTOBER]);
    printf("NOVEMBER = %d days\n", days[NOVEMBER]);
    printf("DECEMBER = %d days\n", days[DECEMBER]);

    return 0;
}
