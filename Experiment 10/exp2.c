#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("exp1.txt", "r");
    if (file == NULL) {
        printf("Error opening the file!");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        // putchar(ch);
        printf("%c", ch); 
    }
    fclose(file);
    return 0;
}