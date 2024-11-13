#include <stdio.h>

int main()
{
    unsigned int x;
    unsigned int y;
    printf("Enter the first number: ");
    scanf("%u", &x);

    printf("Enter the second number: ");
    scanf("%u", &y);

    printf("x = %u, y = %u\n", x, y);

    // Bitwise AND
    printf("x & y = %u\n", x & y);

    // Bitwise OR
    printf("x | y = %u\n", x | y);

    // Bitwise XOR
    printf("x ^ y = %u\n", x ^ y);

    // Bitwise NOT
    printf("~x = %u\n", ~x);

    // Left Shift
    printf("x << 1 = %u\n", x << 1);

    // Right Shift
    printf("y >> 1 = %u\n", y >> 1);

    return 0;
}

/*
if
    a = 5, b = 3
    a & b = 1
    a | b = 7
    a ^ b = 6
    ~a = 4294967290
    a << 1 = 10
    b >> 1 = 1

The bitwise operators used in this program are:

- Bitwise AND (&)
The bitwise AND operator compares each bit of the first operand to the corresponding bit of the second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

- Bitwise OR (|)
The bitwise OR operator compares each bit of the first operand to the corresponding bit of the second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

- Bitwise XOR (^)
The bitwise XOR operator compares each bit of the first operand to the corresponding bit of the second operand. If the bits are not the same, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

- Bitwise NOT (~)
The bitwise NOT operator is a unary operator and operates by reversing all the bits of the operand.

- Left Shift (<<)
The left shift operator shifts the bits of the number to the left and fills 0 on voids left as a result. The left shift operator is equivalent to multiplying the number by some power of two.

- Right Shift (>>)
The right shift operator shifts the bits of the number to the right and fills 0 on voids left as a result. The right shift operator is equivalent to dividing the number by some power of two.


NOTE: These below are my doubts after the reading the above text.


@ what's the binary code for 6?


The binary code for the decimal number 6 is:

00000110

In binary, each digit (or bit) can have a value of either 0 or 1. The binary code for 6 is represented by 8 bits, with the rightmost bit being the least significant bit (LSB) and the leftmost bit being the most significant bit (MSB).

Here's a breakdown of the binary code for 6:

2^7 (128) = 0
2^6 (64) = 0
2^5 (32) = 0
2^4 (16) = 0
2^3 (8) = 0
2^2 (4) = 1
2^1 (2) = 1
2^0 (1) = 0
So, the binary code for 6 is 00000110.


@ what is the binary code for 10


The binary code for the decimal number 10 is:

00001010

Here's a breakdown of the binary code for 10:

2^7 (128) = 0
2^6 (64) = 0
2^5 (32) = 0
2^4 (16) = 0
2^3 (8) = 1
2^2 (4) = 0
2^1 (2) = 1
2^0 (1) = 0
So, the binary code for 10 is 00001010.


@ Explain the bitwise NOT with an example and in detail


The bitwise NOT operator, also known as the bitwise complement or bitwise negation, is a binary operation that takes a single binary number as input and produces a binary number as output. It is denoted by the symbol ~ or NOT.

@ What does the bitwise NOT operator do?

The bitwise NOT operator flips all the bits of the input binary number. In other words, it changes all the 0s to 1s and all the 1s to 0s.

Example:

Let's take the binary number 00001010 (which is the binary representation of the decimal number 10) as an example.

Applying the bitwise NOT operator to 00001010 gives us:

~00001010 = 11110101

As you can see, all the 0s have been changed to 1s, and all the 1s have been changed to 0s.

@ How does it work?

To understand how the bitwise NOT operator works, let's break it down bit by bit:

0 becomes 1 because the NOT operator flips the bit.
0 becomes 1 because the NOT operator flips the bit.
0 becomes 1 because the NOT operator flips the bit.
0 becomes 1 because the NOT operator flips the bit.
1 becomes 0 because the NOT operator flips the bit.
0 becomes 1 because the NOT operator flips the bit.
1 becomes 0 because the NOT operator flips the bit.
0 becomes 1 because the NOT operator flips the bit.
The resulting binary number is 11110101, which is the bitwise NOT of the original binary number 00001010.

Properties of the bitwise NOT operator:

Here are some important properties of the bitwise NOT operator:

Commutativity: The bitwise NOT operator is not commutative, meaning that the order of the operands matters. ~A is not equal to A~.
Associativity: The bitwise NOT operator is not associative, meaning that the order in which the operator is applied matters. ~(A~B) is not equal to (~A)~B.
Distributivity: The bitwise NOT operator does not distribute over other bitwise operators. ~(A&B) is not equal to ~A&~B.
Real-world applications:

The bitwise NOT operator has many real-world applications in computer science and programming, such as:

Bitwise operations: The bitwise NOT operator is used in combination with other bitwise operators to perform complex operations on binary numbers.
Masking: The bitwise NOT operator can be used to create masks to select or clear specific bits in a binary number.
Encryption: The bitwise NOT operator can be used in encryption algorithms to scramble binary data.
In conclusion, the bitwise NOT operator is a fundamental operation in computer science that flips all the bits of a binary number. It has many real-world applications and is an essential tool for any programmer or computer scientist.


@ Explain Bitwise XOR


The bitwise XOR (exclusive OR) operator is a binary operation that takes two binary numbers as input and produces a binary number as output. It is denoted by the symbol ^ or XOR.

What does the bitwise XOR operator do?

The bitwise XOR operator compares each bit of the first operand to the corresponding bit of the second operand. If the bits are the same, the corresponding result bit is set to 0. If the bits are different, the corresponding result bit is set to 1.

Example:

Let's take two binary numbers 00001010 (which is the binary representation of the decimal number 10) and 00000111 (which is the binary representation of the decimal number 7) as an example.

Applying the bitwise XOR operator to 00001010 and 00000111 gives us:

00001010 ^ 00000111 = 00001101

Here's a breakdown of how the bitwise XOR operator works:

0 ^ 0 = 0 (bits are the same, result is 0)
0 ^ 0 = 0 (bits are the same, result is 0)
0 ^ 0 = 0 (bits are the same, result is 0)
0 ^ 0 = 0 (bits are the same, result is 0)
1 ^ 0 = 1 (bits are different, result is 1)
0 ^ 1 = 1 (bits are different, result is 1)
1 ^ 1 = 0 (bits are the same, result is 0)
0 ^ 1 = 1 (bits are different, result is 1)
The resulting binary number is 00001101, which is the bitwise XOR of the original binary numbers 00001010 and 00000111.

Properties of the bitwise XOR operator:

Here are some important properties of the bitwise XOR operator:

Commutativity: The bitwise XOR operator is commutative, meaning that the order of the operands does not matter. A ^ B is equal to B ^ A.
Associativity: The bitwise XOR operator is associative, meaning that the order in which the operator is applied does not matter. (A ^ B) ^ C is equal to A ^ (B ^ C).
Distributivity: The bitwise XOR operator distributes over other bitwise operators. A ^ (B & C) is equal to (A ^ B) & (A ^ C).
Real-world applications:

The bitwise XOR operator has many real-world applications in computer science and programming, such as:

Encryption: The bitwise XOR operator is often used in encryption algorithms to scramble binary data.
Checksums: The bitwise XOR operator can be used to calculate checksums to detect errors in data transmission.
Data compression: The bitwise XOR operator can be used to compress data by eliminating redundant bits.
Cryptography: The bitwise XOR operator is used in various cryptographic algorithms, such as the One-Time Pad.
In conclusion, the bitwise XOR operator is a fundamental operation in computer science that compares each bit of two binary numbers and produces a binary number as output. It has many real-world applications and is an essential tool for any programmer or computer scientist.

*/