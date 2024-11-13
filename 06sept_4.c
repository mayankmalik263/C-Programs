// : INSERTION SORT IN 1D ARRAY

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*

: Suppose we have the following array: [5, 2, 8, 3, 1]

@ Initialize the sorted region with the first element: [5]
@ Iterate through the unsorted region:
    - Compare 2 with 5, shift 5 to the right, and insert 2: [2, 5]
    - Compare 8 with 2 and 5, no shifting needed, insert 8: [2, 5, 8]
    - Compare 3 with 2, 5, and 8, shift 5 and 8 to the right, insert 3: [2, 3, 5, 8]
    - Compare 1 with 2, 3, 5, and 8, shift all elements to the right, insert 1: [1, 2, 3, 5, 8]
@ The final sorted array is: [1, 2, 3, 5, 8]

*/