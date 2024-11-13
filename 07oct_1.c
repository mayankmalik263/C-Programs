#include <stdio.h>

int main()
{
    int a = 27;
    int *ptr = &a; // int* ptr / int * ptr / int *ptr
    printf("%d\n", ptr);
    printf("%p\n", ptr); 
    printf("%x\n", ptr);
    return 0;
}

/*
%d: This format specifier is used to print a signed decimal integer. However, in this case, it's used to print a pointer, which is incorrect. The behavior of using %d to print a pointer is undefined. It may print some garbage value or the actual address, but it's not reliable.

%p: This format specifier is used to print a pointer (an address). It's the correct way to print a pointer in C. The output will be in the form of a hexadecimal number, but the exact format may vary depending on the system. In your case, it printed 0061FF18, which is the memory address where the variable a is stored.

%x: This format specifier is used to print an unsigned hexadecimal integer. When used with a pointer, it will print the pointer's value as an unsigned hexadecimal number, but without the 0x prefix or the padding with zeros that %p provides. In your case, it printed 61ff18, which is the same address as printed by %p, but without the leading zeros.

So, the main difference between %p and %x in this context is the formatting of the output. %p provides a more readable and system-independent way of printing pointers, while %x provides a more compact, hexadecimal representation of the pointer's value.


what does the leading 0 indicates


The leading 00 in the output of %p (0061FF18) indicates that the address is being printed in a zero-padded, fixed-width format.

In many systems, including Windows and Linux, pointers (memory addresses) are typically represented as 32-bit or 64-bit hexadecimal values. When printing a pointer using %p, the output is often formatted to occupy a fixed width, usually 8 characters for 32-bit systems and 16 characters for 64-bit systems.

The leading zeros in the output (0061FF18) serve two purposes:

Zero-padding: They pad the output to the fixed width, ensuring that the address is always displayed with the same number of characters. This makes it easier to read and compare addresses.
Indication of hexadecimal notation: The leading 0 can also be interpreted as an indicator that the following digits are in hexadecimal notation. This is a common convention in many programming languages and systems.
In contrast, the output of %x (61ff18) does not include the leading zeros, as it is intended to print the hexadecimal value without padding or notation indicators.

It's worth noting that the exact format of the output may vary depending on the system, compiler, and architecture. However, in general, the leading zeros in the output of %p are used to provide a consistent and readable representation of memory addresses.
*/

/*
#What if i replace all the digits of this "0061FF18" with "F" in hexadecimal what will it give and indicate?

-In the context of memory addresses, "FFFFFFFF" would represent the maximum possible value for a 32-bit memory address. In other words, it would indicate that the memory address spans the entire 32-bit address space.

-In a 32-bit system, the maximum possible memory address is indeed "FFFFFFFF" (which is equivalent to 4294967295 in decimal). This is because each byte in memory can be addressed using 32 bits, and "FFFFFFFF" is the maximum value that can be represented using 32 bits.

-So, in this sense, "FFFFFFFF" would indicate that the memory address is using the full 32-bit address space, or in other words, it's using the maximum possible memory address.
*/