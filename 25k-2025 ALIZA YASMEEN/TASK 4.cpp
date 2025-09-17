// Task 4: Student CGPA Calculator
#include <stdio.h>

int main() {
    int subjects, i;
    float marks, total = 0, percentage, cgpa;

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++) {
        printf("Enter marks of subject %d (out of 100): ", i);
        scanf("%f", &marks);
        total += marks;
    }

    percentage = (total / (subjects * 100)) * 100;
    cgpa = (percentage / 100) * 4;

    printf("\n------ CGPA Report ------\n");
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("CGPA: %.2f/4.00\n", cgpa);

    return 0;
}
