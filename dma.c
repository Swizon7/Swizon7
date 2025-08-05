#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free

int main() {
    int *arr;
    int i, min, max;

    // Dynamically allocate memory for 10 integers
    arr = (int *)calloc(10 , sizeof(int));
    
    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize min and max
    min = max = arr[0];

    // Find min and max
    for (i = 1; i < 10; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    // Display results
    printf("\nMinimum value = %d\n", min);
    printf("Maximum value = %d\n", max);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
