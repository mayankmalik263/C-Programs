#include <stdio.h>

//:Function prototype for mergedarr
int* mergedarr(int*, int*, int, int);

//:Function prototype for display (assuming it's defined somewhere else)
void display(int*, int*, int*, int, int);

void display(int* a, int* b, int* merged, int size1, int size2) {
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Merged Array: ");
    for (int i = 0; i < (size1 + size2); i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

int* mergedarr(int *a, int *b, int size1, int size2) {
    int i;
    //:Declare the merged array with a size that can hold both arrays
    int merged[size1 + size2];
    
    //:Copy elements from array a to merged array
    for (i = 0; i < size1; i++) {
        merged[i] = a[i];
    }
    
    //:Copy elements from array b to merged array
    for (i = size1; i < (size1 + size2); i++) {
        merged[i] = b[i - size1]; //:Subtract size1 to get the correct index in array b
    }
    
    //:Return the merged array
    return merged;
}

int main() {
    int a[100], b[100], size1, size2;
    
    printf("Enter size of array1: ");
    scanf("%d", &size1);
    
    printf("Enter size of array2: ");
    scanf("%d", &size2);
    
    printf("Enter elements of arr1: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter elements of arr2: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }
    
    //:Call the mergedarr function and store the result in a pointer
    int *ptr = mergedarr(a, b, size1, size2);
    
    //:Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < (size1 + size2); i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    //:Call the display function (assuming it's defined somewhere else)
    display(a, b, ptr, size1, size2);
    
    return 0;
}


// #include <stdio.h>

// int *mergedarr(int *a, int *b, int size1, int size2)
// {
//     int i;
//     int merged[100] for (i = 0; i < size1; i++)
//         merged[i] = a[i];
//     for (i = size1; i < (size1 + size2); i++)
//         merged[i] = b[i];
//     return merged;
// }

// int main()
// {
//     int a[100], b[100], merged[100], size1, size2;
//     printf("Enter size of array1: ");
//     scanf("%d", &size1);
//     printf("Enter size of array2: ");
//     scanf("%d", &size2);
//     printf("Enter elements of arr1: ");
//     for (int i = 0; i < size1; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter elements of arr2: ");
//     for (int i = 0; i < size2; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int *ptr = merged_arr(a, b, size1, size2);
//     diplay(a, b, merged, size1, size2);

//     return 0;
// }