#include <stdio.h>

int main()
{
    FILE *fp; // File pointer
    char ch;
    int spaces = 0;
    int character = 0;
    int numbers = 0;
    int brackets = 0;

    fp = fopen("example.txt", "r"); // opening a file
    while (1)
    {
        ch = fgetc(fp); // reading a character
                        // from the file
        if (ch == ' ')
        {
            spaces++;
        }

        if (ch == EOF) // EOF means end of line
        {
            break;
        }
        else
        {
            character++;
        }
        if (ch == '1' | ch == '2' | ch == '3' | ch == '4' | ch == '5' | ch == '6' | ch == '7' | ch == '8' | ch == '9' | ch == '0')
        {
            numbers++;
        }
        if (ch == '[' | ch == ']')
        {
            brackets++;
        }

        // printf("%c", ch);
    }
    // printf("\n");
    printf("No. of spaces: %d\n", spaces);
    printf("No. of characters: %d\n", character);
    printf("Amount of numbers: %d\n", numbers);
    printf("Amount of brackets '[' and ']': %d\n", brackets);
    fclose(fp); // closing the file
    return 0;
}