#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }

    return s[index];  // return the top student structure
}

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

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Get top student by calling function
    struct Student top = getTopStudent(s, n);

    // Print top student's details
    printf("\n--- Top Student ---\n");
    printf("Name      : %s\n", top.name);
    printf("Roll No   : %d\n", top.roll_no);
    printf("Marks     : %.2f\n", top.marks);

    return 0;
}
