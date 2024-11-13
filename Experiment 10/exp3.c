#include <stdio.h>

int main() {
    FILE *file = fopen("exp1.txt", "r");
    char line[256];
    if (file) {
        while (fgets(line, 256, file)) { 
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("Error opening file\n");
    }
    return 0;
}