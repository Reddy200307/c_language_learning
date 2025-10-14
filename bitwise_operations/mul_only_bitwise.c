#include <stdio.h>

// Function to add two numbers using only bitwise operators
int bitwise_add(int x, int y) {
    while (y != 0) {
        int carry = x & y;     // bits that generate a carry
        x = x ^ y;             // sum without carry
        y = carry << 1;        // carry shifted to the correct position
    }
    return x;
}

// Function to multiply two numbers using bitwise operators
int bitwise_multiply(int a, int b) {
    int result = 0;
    int negative = 0;

    // Handle negative numbers
    if (a < 0) {
        a = ~a + 1;   // 2's complement
        negative = !negative;
    }
    if (b < 0) {
        b = ~b + 1;   // 2's complement
        negative = !negative;
    }

    while (b > 0) {
        if (b & 1) {               // If LSB of b is 1, add a to result
            result = bitwise_add(result, a);
        }
        a <<= 1;                    // multiply a by 2
        b >>= 1;                    // move to next bit of b
    }

    if (negative) {                 // adjust sign
        result = ~result + 1;       // 2's complement
    }

    return result;
}

int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    int product = bitwise_multiply(x, y);
    printf("Product: %d\n", product);

    return 0;
}
