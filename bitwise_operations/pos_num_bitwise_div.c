#include <stdio.h>

int main() {
    unsigned int dividend, divisor;
    unsigned int quotient = 0, remainder = 0;

    printf("Enter dividend: ");
    scanf("%u", &dividend);
    printf("Enter divisor: ");
    scanf("%u", &divisor);

    if (divisor == 0) {
        printf("Division by zero is not allowed!\n");
        return 1;
    }

    remainder = dividend;

    // Start from the highest bit and shift divisor left
    for (int i = 31; i >= 0; i--) {
        // Check if (divisor << i) fits into remainder
        if ((divisor << i) <= remainder) {
            remainder -= (divisor << i);
            quotient |= (1U << i);  // set the i-th bit of quotient
        }
    }

    printf("Quotient: %u\n", quotient);
    printf("Remainder: %u\n", remainder);

    return 0;
}
