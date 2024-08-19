#include <stdio.h>



int main()
{
    int input_days = 0;
    int days = 0;
    int months = 0;
    int years = 0;

    int input_validator = 0;

    //taking user input and validating it.
    do
    {
        printf("Enter number of days :");
        input_validator = scanf("%d", &input_days);
        if (input_days < 0 || input_validator != 1)
        {
            printf("Invalid Input : inout must be a positive integer.\n");
            while(getchar() != '\n')
                ;//clearing input buffer
        }
    } while (input_days < 0 || input_validator != 1);
    

    //calculating number of years, months and days in input days.
    years = input_days / 365;
    input_days %= 365; 
    months = input_days / 30;
    input_days %= 30; 
    days = input_days;

    //output
    printf("Years  : %d\nMonths : %d\nDays   : %d\n", years, months, days);

    return 0;
}