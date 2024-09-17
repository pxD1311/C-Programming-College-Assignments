#include <stdio.h>



int main()
{
    int l;
    printf("Enter loaves :");
        
    if(scanf("%d", &l) != 1 || l < 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("Total cost : $%d", 3*l);
    return 0;
}