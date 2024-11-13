#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Entered string not a palindrome\n");
            return 0;
        }
    }

    printf("Entered String is a Palindrome\n");
    return 0;
}