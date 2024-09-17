#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);
    free(arr);
    return 0;
}
