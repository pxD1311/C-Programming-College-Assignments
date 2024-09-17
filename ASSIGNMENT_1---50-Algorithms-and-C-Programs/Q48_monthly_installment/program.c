#include <stdio.h>



int main()
{
    int p, t;
    double r;
    scanf("%d %lf %d", &p, &r, &t);

    double si = p*r*t/100;

    printf("Monthly installment = %lf", (p+si)/12);

    return 0;
}