#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    celsius = fahrenheit = 0;

    printf("Celsius to Fahrenheit calculator.\n");
    printf("Enter temperature in Celsius :");

    while (scanf("%lf", &celsius) != 1)
    {
        printf("Invalid Input : Temperature must be a real valued number!\n");
        printf("Enter temperature in Celsius :");
    }

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("%lf degree Celsius is %lf Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}