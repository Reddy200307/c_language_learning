#include <stdio.h>

int main() {
    int a, b;
    int result = 0;
    int negative = 0;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Handle negative numbers
    if (a < 0) {
        a = -a;
        negative = !negative;
    }
    if (b < 0) {
        b = -b;
        negative = !negative;
    }

    // Bitwise multiplication
    while (b > 0) {
        if (b & 1) {       // If LSB of b is 1, add a to result
            result += a;
        }
        a <<= 1;            // Multiply a by 2
        b >>= 1;            // Divide b by 2
    }

    if (negative) result = -result;

    printf("Multiplication result: %d\n", result);

    return 0;
}
