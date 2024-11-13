#include <stdio.h>

// Function to check if an array is a palindrome
int is_palindrome(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (is_palindrome(arr, n)) {
        printf("Entered array is a palindrome\n");
    } else {
        printf("Entered array is not a palindrome\n");
    }

    return 0;
}