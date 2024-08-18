#include <stdio.h>

int main()
{
    const int MIN_VOTING_AGE = 18;
    int age = 0, input_age_validator = 0;

    // Input age and validationg the input    
    do
    {
        printf("Enter your age :");
        input_age_validator = scanf("%d", &age);
        if(input_age_validator != 1  || age < 0)
        {
            printf("Invalid Input : age must be a positive integer.\n");
            while(getchar() != '\n')
                ;// clearing input buffer
        }
    } while (age < 0 || input_age_validator != 1);

    // determining if the person is eligible for voting or not
    if (age >= MIN_VOTING_AGE)
        printf("You are eligible for voting.\n");
    else
        printf("You are not eligible for voting.\n");

    return 0;
}