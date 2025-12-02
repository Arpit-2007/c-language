#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // Input employee data
    printf("Enter employee name: ");
    scanf("%s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    // ---------- WRITE TO BINARY FILE ----------
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data written to employee.dat successfully!\n");

    // ---------- READ FROM BINARY FILE ----------
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print read data
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name      : %s\n", e2.name);
    printf("ID        : %d\n", e2.id);
    printf("Salary    : %.2f\n", e2.salary);

    return 0;
}
