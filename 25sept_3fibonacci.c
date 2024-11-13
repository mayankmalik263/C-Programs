#include <stdio.h>

void FIBO(int num, int a, int b) {
    if (num == 0) {
        return;
    } else {
        printf("%d ", a);
        FIBO(num - 1, b, a + b);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d: ", num);
    FIBO(num + 1, 0, 1);
    printf("\n");

    return 0;
}
// #include <stdio.h>

// int FIBO(int num) {
//     if (num == 0 || num == 1) {
//         return num;
//     } else {
//         return FIBO(num - 1) + FIBO(num - 2);
//     }
// }

// int main() {
//     int num;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     printf("Fibonacci sequence up to %d: ", num);
//     for (int i = 0; i <= num; i++) {
//         printf("%d ", FIBO(i));
//     }
//     printf("\n");

//     return 0;
// }

