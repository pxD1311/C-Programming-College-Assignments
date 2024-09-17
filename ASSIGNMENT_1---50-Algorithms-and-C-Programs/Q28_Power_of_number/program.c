#include <stdio.h>



int main() {
    int base, exponent, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to power %d is %d\n", base, exponent, result);

    return 0;
}
