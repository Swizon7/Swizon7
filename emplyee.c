#include <stdio.h>

#define SIZE 30

int main() {
    int age[SIZE];
    int i;
    int largest, second;

    // Input ages of 30 employees
    printf("Enter the ages of 30 employees:\n");
    for(i = 0; i < SIZE; i++) {
        printf("Age of employee %d: ", i + 1);
        scanf("%d", &age[i]);
    }

    // Initialize largest and second largest
    if(age[0] > age[1]) {
        largest = age[0];
        second = age[1];
    } else {
        largest = age[1];
        second = age[0];
    }

    // Loop through rest of array
    for(i = 2; i < SIZE; i++) {
        if(age[i] > largest) {
            second = largest;
            largest = age[i];
        } else if(age[i] > second && age[i] != largest) {
            second = age[i];
        }
    }

    // Output the second largest age
    printf("\nThe second largest age is: %d\n", second);

    return 0;
}
