#include <stdio.h>

int main() {
    int intVar = 10;
    float floatVar = 20.5;
    char charVar = 'A';

    int *intPtr;
    float *floatPtr;
    char *charPtr;

    intPtr = &intVar;
    floatPtr = &floatVar;
    charPtr = &charVar;

    printf("Value of intVar: %d, Address of intVar: %p, Value of intPtr: %p\n", *intPtr, &intVar, intPtr);
    printf("Value of floatVar: %.2f, Address of floatVar: %p, Value of floatPtr: %p\n", *floatPtr, &floatVar, floatPtr);
    printf("Value of charVar: %c, Address of charVar: %p, Value of charPtr: %p\n", *charPtr, &charVar, charPtr);

    return 0;
}


// #include <stdio.h>

// int main() {
//     // Declare variables
//     int intVar = 10;
//     float floatVar = 20.5;
//     char charVar = 'A';

//     // Declare pointers
//     int *intPtr;
//     float *floatPtr;
//     char *charPtr;

//     // Initialize pointers with the addresses of the variables
//     intPtr = &intVar;
//     floatPtr = &floatVar;
//     charPtr = &charVar;

//     // Print the values of the variables and the pointers
//     printf("Value of intVar: %d, Address of intVar: %p, Value of intPtr: %p\n", *intPtr, (void*)&intVar, (void*)intPtr);
//     printf("Value of floatVar: %.2f, Address of floatVar: %p, Value of floatPtr: %p\n", *floatPtr, (void*)&floatVar, (void*)floatPtr);
//     printf("Value of charVar: %c, Address of charVar: %p, Value of charPtr: %p\n", *charPtr, (void*)&charVar, (void*)charPtr);

//     return 0;
// }