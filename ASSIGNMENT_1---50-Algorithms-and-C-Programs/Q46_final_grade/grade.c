#include <stdio.h>



int main() {
    double mark1, mark2, mark3, mark4, mark5, total, percentage;
    char grade;

    printf("Enter marks for subject 1: ");
    scanf("%lf", &mark1);
    printf("Enter marks for subject 2: ");
    scanf("%lf", &mark2);
    printf("Enter marks for subject 3: ");
    scanf("%lf", &mark3);
    printf("Enter marks for subject 4: ");
    scanf("%lf", &mark4);
    printf("Enter marks for subject 5: ");
    scanf("%lf", &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = total / 5;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total Marks = %.2lf\n", total);
    printf("Percentage = %.2lf%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}
