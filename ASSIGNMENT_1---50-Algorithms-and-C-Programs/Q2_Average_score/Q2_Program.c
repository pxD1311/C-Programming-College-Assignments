#include <stdio.h>

int main()
{
    const int MAX_SCORE = 100;
    const int STUDENT_NUMBER = 5;

    int sum = 0;
    double average = 0;
    int temp_score = 0;

    int input_validator = 0;
    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        printf("Enter score of student %d :", i+1);
        input_validator = scanf("%d", &temp_score);
        while (input_validator != 1 || temp_score < 0 || temp_score > MAX_SCORE)
        {
            if (input_validator != 1)
                printf("Invalid Input : test score must be an integer\n");
            if (temp_score < 0)
                printf("Invalid Input : test score can not be less than zero\n");
            else if(temp_score > MAX_SCORE)
                printf("Invalid Input : test score can not be greater than the maximum score i.e %d\n", MAX_SCORE);
        }
        sum += temp_score;
    }

    if (STUDENT_NUMBER > 0)
    {
        average= sum/STUDENT_NUMBER;
        printf("The average of given scores of %d students is %lf", STUDENT_NUMBER, average);
    }
    else
        printf("Cannot calcualte average as number of students can not be zero or negative");
    return 0;
}