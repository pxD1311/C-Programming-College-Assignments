#include <stdio.h>



int main()
{
    int year;
    printf("Enter Year :" );
    scanf("%d", &year);

    if (year > 0)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            printf("Leap Year.");
        }
        else
        {
            printf("Not Leap Year.");
        }
    }
    else
    {
        printf("Invalid Input.");
    }

    return 0;
}