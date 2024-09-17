#include <stdio.h>

int max(int a, int b){
    return (a>=b) ? a : b;
}

int main()
{
    int a, b, c;
    printf("Enter 3 numbers :");
    scanf("%d %d %d", &a, &b, &c);
    printf("MAX : %d", (max(a,b) >= max(b,c)? max(a,b) : max(b,c)));
    return 0;
}