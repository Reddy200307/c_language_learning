#include <stdio.h>

int main() {
    int dividend, divisor;
    int quotient = 0, remainder = 0;
    int sign = 1;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Division by zero!\n");
        return 1;
    }

    int a = dividend;
    int b = divisor;

    // Determine the sign
    if (a < 0) { a = -a; sign = -sign; }
    if (b < 0) { b = -b; sign = -sign; }

    remainder = 0;

    for (int i = 31; i >= 0; i--) {
        if ((a >> i) >= b) {
            a -= (b << i);
            quotient |= (1 << i);
        }
    }

    remainder = a;
    if (sign < 0) quotient = -quotient;
    if (dividend < 0) remainder = -remainder;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
