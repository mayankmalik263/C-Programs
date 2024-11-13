// #include <stdio.h>

// int main()
// {
//     int x = 12;
//     printf("%x", x);
//     return 0;
// }

// - You can use "%o" to print octal number of the given number (octal format specifier)
// : "%b" binary format specifier which only works in certain latest compliers
// @ for hexedecimal we can use "%x"

#include <stdio.h>

int main()
{
    char x[100] = "12\a8876";
    printf("%s", x);
    return 0;
}