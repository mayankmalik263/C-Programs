#include <stdio.h>

int main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int i, n = 10;

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found in the array\n");
    return 0;
}
