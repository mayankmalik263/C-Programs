// : SELECTION SORT IN 1D ARRAY

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i, j, min_idx, temp;
    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    { 
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*

: Suppose we have the following array: [5, 2, 8, 3, 1, 6, 4]

@ Iteration 1:

-The algorithm considers 5 as the minimum element.
-It finds the minimum element 1 in the unsorted portion of the array.
-It swaps 5 with 1, resulting in [1, 2, 8, 3, 5, 6, 4].

@ Iteration 2:

-The algorithm considers 2 as the minimum element.
-It finds the minimum element 2 in the unsorted portion of the array (which is already the minimum, so no swap occurs).
-The array remains [1, 2, 8, 3, 5, 6, 4].

@Iteration 3:

-The algorithm considers 8 as the minimum element.
-It finds the minimum element 3 in the unsorted portion of the array.
-It swaps 8 with 3, resulting in [1, 2, 3, 8, 5, 6, 4].
-And so on...

*/



