#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return GCD(num2, num1 % num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, GCD(num1, num2));

    return 0;
}

/*Example: Find the GCD of 12 and 15

We want to find the greatest common divisor (GCD) of 12 and 15.

Step 1: Calculate a % b

In this case, a = 15 and b = 12. We calculate the remainder of a divided by b:

15 % 12 = 3

So, a % b = 3.

The property: GCD(a, b) = GCD(b, a % b)

Now, we can apply the property:

GCD(15, 12) = GCD(12, 3)

Why does this work?

Think about it: if a number d divides both 15 and 12, it must also divide the remainder of 15 divided by 12, which is 3. Conversely, if d divides both 12 and 3, it must also divide 15.

Simplifying the problem

We've reduced the problem of finding the GCD of 15 and 12 to finding the GCD of 12 and 3. This is a smaller problem, and we can repeat the process:

GCD(12, 3) = GCD(3, 12 % 3) = GCD(3, 0)

Base case: GCD(3, 0) = 3

Since 3 is the only number that divides 3 and 0, the GCD is simply 3.

The final answer

So, the GCD of 15 and 12 is 3.

Recap

We started with GCD(15, 12) and applied the property to reduce the problem to GCD(12, 3), and then to GCD(3, 0), which is the base case. The final answer is the GCD of the original numbers, which is 3.

I hope this example helps illustrate the mathematical property GCD(a, b) = GCD(b, a % b)!*/