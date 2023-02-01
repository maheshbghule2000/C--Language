#include <stdio.h>

int main() {
    int choice, total_subjects, i, marks, total = 0, average;

    printf("Enter the number of subjects: ");
    scanf("%d", &total_subjects);

    for (i = 1; i <= total_subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

    average = total / total_subjects;

    printf("Your average is: %d\n", average);
    printf("Your grade is: ");

    switch (average / 10) {
        case 9:
        printf("A+\n");
            break;
        case 10:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
    }

    return 0;
}
