#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1, n2, temp;

    printf("Enter the number of elements for list 1:");
    scanf("%d", &n1);

    int *arr1 = (int*)malloc(n1*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements for list 2: ");
    scanf("%d", &n2);

    int *arr2 = (int*)malloc(n2*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    int *arr3 = (int*)malloc((n1+n2)*sizeof(int));

    temp = 0;
    for (int i = 0; i < n1+n2; i++)
    {
        if(i < n1)
        {
            arr3[i]=arr1[i];
        }else{
            arr3[i]=arr2[temp++];
        }
    }

    for (int i = 0; i < n1+n2; i++)
    {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}