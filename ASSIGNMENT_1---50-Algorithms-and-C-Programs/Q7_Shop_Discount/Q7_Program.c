#include <stdio.h>

int main()
{
    const double MIN_DISCOUNT_PRICE = 200;
    const double DISCOUNT_RATE = 0.05;
    double amount = 0;
    double discount = 0;
    int input_validator = 0;

    // taking input and validating it
    do
    {
        printf("Enter amount :");
        input_validator = scanf("%lf", &amount);
        if (amount < 0 || input_validator != 1)
        {
            printf("Invalid Input : Amount can only be a positive real number.\n ");
            while (getchar() != '\n')
                ;
            continue;
        }
    } while (amount < 0 || input_validator != 1);

    //applying discount
    if (amount >= MIN_DISCOUNT_PRICE)
    {
        printf("Applying %.2lf%% discount on %.2lf.\n", DISCOUNT_RATE * 100, amount);
        discount = amount * DISCOUNT_RATE;
    }

    //final amount
    amount -= discount;

    //outputting the final amount
    printf("Final amount to pay : %.2lf", amount);

    return 0;
}