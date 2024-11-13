#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("exp1.txt", "w");

    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; 
    }
    fprintf(file, "Hello World!\n");
    // fprintf(file, "This is the second line of text.\n");
    fclose(file);
    return 0;
}