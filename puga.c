#include <stdio.h>

int main() {
int students, i = 1, subjects;
int totalSubjects = 0;
float fee, totalFees = 0;

printf("Enter number of students: ");
scanf("%d", &students);

while (students <= 0) {
    printf("Enter a valid number: ");
    scanf("%d", &students);
}

while (i <= students) {
    printf("\nStudent %d\n", i);
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    while (subjects < 0) {
        printf("Enter a valid number: ");
        scanf("%d", &subjects);
    }

    fee = subjects * 500;

    printf("Enrollment Fee: P%.2f\n", fee);

    totalSubjects = totalSubjects + subjects;
    totalFees = totalFees + fee;

    i++;
}

printf("\n--- ENROLLMENT SUMMARY ---\n");
printf("Total Students: %d\n", students);
printf("Total Subjects: %d\n", totalSubjects);
printf("Total Fees Collected: P%.2f\n", totalFees);

return 0;
}