#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int second_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    if (second_max == max) {
        printf("There is no second largest integer in the list.\n");
    } else {
        printf("The second largest integer in the list is: %d\n", second_max);
    }

    return 0;
}