#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // print in new format
    printf("%02d-%s-%04d\n", day, months[month], year);

    return 0;
}
