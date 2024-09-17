#include <stdio.h>



int main() {
    int num;
    long long int factorial = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid Input.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
