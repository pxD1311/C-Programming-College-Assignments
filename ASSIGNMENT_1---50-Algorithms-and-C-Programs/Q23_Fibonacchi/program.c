#include <stdio.h>



int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Fibonacci Series:");
    if(n >= 1)
    {
        printf("%d ,", t1);
    }
    if(n>=2)
    {
        printf("%d ,", t2);
    }

    while (nextTerm <= n) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
