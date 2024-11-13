#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char word[100];
    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening the file!\n");
        return 1;
    }
    while (fscanf(file, "%s", word) != EOF)
    {
        int length = strlen(word);
        for (int i = 0; i < length / 2; i++)
        {
            char temp = word[i];
            word[i] = word[length - i - 1];
            word[length - i - 1] = temp;
        }
        printf("%s ", word);
    }
    fclose(file);
    printf("\n");
    return 0;
}
