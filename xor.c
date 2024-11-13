#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
        printf("Invalid size. Please enter a size between 1 and 100.\n");
        return 1;
    }
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result ^= arr[i];
    }
    printf("The number that is not in a pair is: %d\n", result);
    return 0;
}


/*
- The XOR (Exclusive OR) operation is a fundamental concept in computer science and electronics. It's a binary operation that takes two bits as input and produces an output based on the following rules:

: XOR Truth Table:

@ A	B	A ^ B
- 0	0	  0
- 0	1	  1
- 1	0	  1
- 1	1	  0
: As you can see, the XOR operation has the following properties:

A ^ 0 = A: When one of the inputs is 0, the output is the other input.
A ^ A = 0: When both inputs are the same, the output is 0.
A ^ 1 = ~A: When one of the inputs is 1, the output is the complement of the other input.
In the context of the code, the XOR operation is used to find the single number that is not part of a pair in the array. Here's how it works:

When a number appears twice in the array, it gets XORed with itself, resulting in 0.
When a number appears only once in the array, it gets XORed with 0, resulting in the number itself.
Since the XOR operation is commutative and associative, the order in which the numbers are XORed does not matter.
By using the XOR operation, the code can efficiently find the single number that is not part of a pair in the array. This is because the XOR operation cancels out the paired numbers, leaving only the single number that is not part of a pair.

In the example I provided earlier, if the user enters the array [1, 2, 2, 3, 3, 4, 5, 5], the XOR operation would work as follows:

result is initialized to 0.
result is XORed with 1, resulting in 1.
result is XORed with 2, resulting in 3.
result is XORed with 2, resulting in 1.
result is XORed with 3, resulting in 2.
result is XORed with 3, resulting in 0.
result is XORed with 4, resulting in 4.
result is XORed with 5, resulting in 1.
result is XORed with 5, resulting in 4.
The final value of result is 4, which is the single number that is not part of a pair in the array.

*/