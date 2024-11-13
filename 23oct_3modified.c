#include <stdio.h>
#include <string.h>

int countVowels(char *str)
{
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int vowelCount = countVowels(str);
    int length = strlen(str);
    printf("The length of the inputted string: %d\n", length);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}