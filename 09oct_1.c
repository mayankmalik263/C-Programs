#include <stdio.h>

int main()
{
    int x = 10;  // a normal integer variable
    int *p = &x;  // a pointer to x (single pointer)
    int **ptr = &p;  // a pointer to p (double pointer)

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of ptr: %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);

    // Using the double pointer to access the value of x
    printf("Value of x using ptr: %d\n", **ptr);

    // Changing the value of x using the double pointer
    **ptr = 20;
    printf("New value of x: %d\n", x);

    return 0;
}

/*
- We declare an integer variable x with the value 10.
- We declare a pointer p that points to x. This is a single pointer.
- We declare a pointer ptr that points to p. This is a double pointer.
- We print out the values and addresses of x, p, and ptr to illustrate the relationships between them.
- We use the double pointer ptr to access the value of x by dereferencing it twice (**ptr).
- We change the value of x using the double pointer by assigning a new value to **ptr.
*/