#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int len;
    for (len = 0; name[len] != '\0' && name[len] != '\n'; len++)
        ;

    printf("The length of the string is: %d", len);
}