#include <stdio.h>

int main()
{
    int choice, amount;
    int balance = 0;
    printf("Enter balance :");
    scanf("%d", &balance);

    while (1)
    {
        printf("Enter your choice :\n1-Show balance\n2-deposit\n3-withdraw\n4-exit.\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your balance is : %d\n", balance);
            break;
        case 2:
            printf("Amount to be deposited :");
            scanf("%d", &amount);
            if (amount >= 0 && (amount % 500 == 0 || amount % 200 == 0 || amount % 100 == 0 || amount % 50 == 0))
            {
                balance += amount;
            }
            else
            {
                printf("Insufficient balance.\n");
            }
            break;
        case 3:
            printf("Amount to withdraw : ");
            scanf("%d", &amount);
            if (amount > 0 && amount <= balance && (amount % 500 == 0 || amount % 200 == 0 || amount % 100 == 0 || amount % 50 == 0))
            {
                printf("\n\nAmount withdrawed : %d\n\n", amount);
                balance -= amount;
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
}