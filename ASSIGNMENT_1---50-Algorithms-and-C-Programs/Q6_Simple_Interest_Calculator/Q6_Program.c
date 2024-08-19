#include <stdio.h>


int main()
{
    // si = p*r*t/100
    double simple_interest, principal, rate, time;
    simple_interest = principal = rate = time = 0;

    int p_valid, r_valid, t_valid;
    p_valid = r_valid = t_valid = 0;

    //taking user input and validating it
    do
    {
        if (p_valid != 1)
        {
            printf("Enter Principal amount :");
            p_valid = scanf("%lf", &principal);
            if (principal < 0 || p_valid != 1)
            {
                p_valid = 0;
                printf("Invalid Input : Pricnipal can only be a positive real number\n");
                while (getchar() != '\n')
                    ;//clearing input buffer
            }
        }
        if (r_valid != 1)
        {
            printf("Enter Interest Rate    :");
            r_valid = scanf("%lf", &rate);
            if (rate < 0 || r_valid != 1)
            {
                r_valid = 0;
                printf("Invalid Input : Rate can only be a positive real number\n");
                while (getchar() != '\n')
                    ;
            }
        }
        if (t_valid != 1)
        {
            printf("Enter Time (in years)  :");
            t_valid = scanf("%lf", &time);
            if (time < 0 || t_valid != 1)
            {
                t_valid = 0;
                printf("Invalid Input : Time can only be a positive real number\n");
                while (getchar() != '\n')
                    ;
            }
        }
    } while (p_valid != 1 || r_valid != 1 || t_valid != 1);

    //calculating simple interest
    simple_interest = principal * rate * time / 100;

    //outputting the result
    printf("Simple Interest : %lf", simple_interest);

    return 0;
}