#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *ptr1, *ptr2;
    int length, i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    length = strlen(str);

    ptr1 = str;
    ptr2 = str + length - 1;

    for (i = 0; i < length / 2; i++)
    {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}