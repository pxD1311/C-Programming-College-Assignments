#include <stdio.h>



int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i++)
    {
        if (i%2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of even numbers between 1 and 100 is %d\n", sum);

    return 0;
}
