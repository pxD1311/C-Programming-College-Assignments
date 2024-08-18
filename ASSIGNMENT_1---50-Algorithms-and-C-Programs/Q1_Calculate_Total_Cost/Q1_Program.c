#include <stdio.h>

int main()
{
    const int DISCOUNT_PRICE = 100;
    const double DISCOUNT_RATE = 0.10;

    double total_cost = 0;
    double temp_cost = 0;

    int total_items = 0;
    printf("Enter total number of items in your shopping cart :");

    // input total items and validating the input
    while (scanf("%d", &total_items) != 1)
    {
        printf("Invalid Input : Total number of items must be an INTEGER!\n");
        printf("Enter total number of items in your shopping cart :");
    }

    // input price of individual items, validating the input and also adding the individual cost to total cost
    int input_validator = 0;
    for (int i = 0; i < total_items; i++)
    {
        printf("Enter cost of item %d :", i + 1);
        input_validator = (int)scanf("%lf", &temp_cost);
        while (input_validator != 1 || temp_cost < 0)
        {
            if (input_validator != 1)
                printf("Invalid Input : Cost of an item must be a positive real number!\n");
            if (temp_cost < 0)
                printf("Invalid Input : Cost of an item can not be a negative value!\n");
        }
        total_cost += temp_cost;
    }

    // applying dicount if condition is satisfied and printing the output in both cases
    if (total_cost > DISCOUNT_PRICE)
    {
        total_cost -= total_cost * DISCOUNT_RATE;
        printf("Total cost of items in the shopping cart after applying discount of %lf%% is : %lf", DISCOUNT_RATE * 100, total_cost);
    }
    else
        printf("Total cost of items in the shopping cart is : %lf", total_cost);

    return 0;
}