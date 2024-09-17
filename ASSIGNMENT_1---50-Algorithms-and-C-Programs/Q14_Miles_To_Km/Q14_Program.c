#include <stdio.h>



int main()
{
    double km;
    printf("Enter Km :");
    scanf("%lf", &km);
    if(km >= 0){
        printf("Miles : %lf", km/1.609);
    }
    else{
        printf("Invalid Input.");
    }
    return 0;
}