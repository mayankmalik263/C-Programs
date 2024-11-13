//@ SELECTION SORT USING RECURSION
#include <stdio.h>

void display(int n, int *ptr)
{
    int i;
    printf("Print the array\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }
}
void selection_sort(int n, int *ptr)
{
    int i, j, min, ind, temp;
    for (i = 0; i < n - 1; i++) //:(<n) >>>> (<n-1)
    {
        min = *(ptr + i);           //: (-9999) >>> *(ptr + i)
        ind = i;                    // : ADDED
        for (j = i + 1; j < n; j++) //: (= 0) >>>> (= i + 1) , (< n - 1 - i) >>>> (< n)
        {
            if (*(ptr + j) < min)  //: (>)  >>>> (<)
            {
                min = *(ptr + j);
                ind = j;
            }
        }
        temp = *(ptr + ind);
        *(ptr + ind) = *(ptr + i); //:*(ptr + j) >>>> *(ptr + ind) , *(ptr + ind) >>>> *(ptr + i)
        *(ptr + i) = temp; //: *(ptr + ind) >>>> *(ptr + i)
    }
}

int main()
{
    int a[100], i, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter %d elements in array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(n, a); //-(n,&a[0])
    display(n, a);        //-(n,&a[0])

    return 0;
}