#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lineNumber = 1;
    file = fopen("source.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        printf("%d: %c\n", lineNumber, ch);
        lineNumber++;
    }
    fclose(file);
    return 0;
}