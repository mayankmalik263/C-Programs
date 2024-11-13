#include <math.h>
#include <stdio.h>

int main() {
  int n = 5;
  int s = n - 1;
  for (int i = 1; i <= n; i++) {
    int eleven = pow(11, i - 1);
    int tens = pow(10, i - 1);
    for (int k = 0; k < s; k++) {
      printf(" ");
    }
    s--;
    for (int k = 0; k < i; k++) {
      int digit = (eleven / tens) % (10);
      printf("%d ", digit);
      tens = tens / 10;
    }
    printf("\n");
    }
}

