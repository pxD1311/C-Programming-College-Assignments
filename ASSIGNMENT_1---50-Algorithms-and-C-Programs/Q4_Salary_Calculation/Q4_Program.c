#include <stdio.h>

int main()
{
    const int MIN_BONUS_TIME = 5;
    const double BONUS_RATE = 0.10;

    int input_ms = 0, input_ey = 0;
    double monthly_salary = 0.0, base_annual_salary = 0.0, total_annual_salary = 0, bonus = 0.0;
    int experience_years = 0;

    // Taking and validating user input
    do
    {
        if (input_ms != 1)
        {
            printf("Enter your monthly salary :");
            input_ms = scanf("%lf", &monthly_salary);
        }
        if (input_ms != 1)
        {
            printf("Invalid Input : Monthly salary must be a real number.\n");
            while (getchar() != '\n')
                ; // clearing input buffer
        }
        else if (monthly_salary < 0)
            printf("Invalid Input : Monthly salary can not be negative.\n");

        if (input_ey != 1)
        {
            printf("Enter your work experience in years :");
            input_ey = scanf("%d", &experience_years);
        }
        if (input_ey != 1)
        {
            printf("Invalid Input : Work experience must be an integer.\n");
            while (getchar() != '\n')
                ; // clearing input buffer
        }
        else if (experience_years < 0)
            printf("Invalid Input : Work experience can not be negative.");
    } while (input_ms != 1 || input_ey != 1 || experience_years < 0 || monthly_salary < 0);

    // salary calculation (base bonus and total)
    base_annual_salary = monthly_salary * 12;

    if (experience_years >= MIN_BONUS_TIME)
        bonus = base_annual_salary * BONUS_RATE;

    total_annual_salary = base_annual_salary + bonus;

    // outputting the salary (base bonus and total)
    printf("Base Annual Salary : %.2lf\nBonus : %.2lf\nTotal Annual Salary : %.2lf\n", base_annual_salary, bonus, total_annual_salary);

    return 0;
}