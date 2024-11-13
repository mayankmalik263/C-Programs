#include <stdio.h>
#include <math.h>

int main() {
  int i, num, digit, sum, temp;

  printf("Armstrong numbers between 1 and 500 are:\n");

  for (i = 1; i <= 500; i++) {
    num = i;
    sum = 0;
    temp = num;

    while (temp != 0) {
      digit = temp % 10;
      sum += pow(digit, 3);
      temp /= 10;
    }

    if (sum == num) {
      printf("%d\n", num);
    }
  }

  return 0;
}