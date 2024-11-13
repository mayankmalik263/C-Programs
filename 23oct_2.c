#include <stdio.h>

int main() {
    // Declare arrays of different data types
    int intArray[] = {10, 20, 30, 40, 50};
    char charArray[] = "Hello";
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Pointers to the first element of each array
    int *intPtr = intArray;
    char *charPtr = charArray;
    float *floatPtr = floatArray;

    // Print initial addresses
    printf("Initial addresses:\n");
    printf("intPtr: %p\n", (void*)intPtr);
    printf("charPtr: %p\n", (void*)charPtr);
    printf("floatPtr: %p\n", (void*)floatPtr);

    // Pointer arithmetic
    printf("\nPointer arithmetic results:\n");

    // Incrementing pointers
    intPtr++; // Move to the next int (4 bytes)
    charPtr++; // Move to the next char (1 byte)
    floatPtr++; // Move to the next float (4 bytes)

    // Print addresses after increment
    printf("After increment:\n");
    printf("intPtr: %p, Value: %d\n", (void*)intPtr, *intPtr); // Should print 20
    printf("charPtr: %p, Value: %c\n", (void*)charPtr, *charPtr); // Should print 'e'
    printf("floatPtr: %p, Value: %.1f\n", (void*)floatPtr, *floatPtr); // Should print 2.2

    // Decrementing pointers
    intPtr--; // Move back to the previous int
    charPtr--; // Move back to the previous char
    floatPtr--; // Move back to the previous float

    // Print addresses after decrement
    printf("\nAfter decrement:\n");
    printf("intPtr: %p, Value: %d\n", (void*)intPtr, *intPtr); // Should print 10
    printf("charPtr: %p, Value: %c\n", (void*)charPtr, *charPtr); // Should print 'H'
    printf("floatPtr: %p, Value: %.1f\n", (void*)floatPtr, *floatPtr); // Should print 1.1

    return 0;
}