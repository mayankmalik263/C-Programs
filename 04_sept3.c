#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i, num, count = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Check if n is within bounds
    if (n <= 0 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter the list of integers: ");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    printf("Enter the number to find the frequency of: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("The frequency of %d is: %d\n", num, count);

    return 0;
}