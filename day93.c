#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    int index = 0;  // assume first student is highest initially
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    // Print highest scoring student
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name      : %s\n", s[index].name);
    printf("Roll No   : %d\n", s[index].roll_no);
    printf("Marks     : %.2f\n", s[index].marks);

    return 0;
}
