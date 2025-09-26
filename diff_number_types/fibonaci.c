/*
Input: n = 5
Output: 0 1 1 2 3
Explanation: The first 5 terms of the Fibonacci series are 0, 1, 1, 2, 3.

Input: N = 7
Output: 0 1 1 2 3 5 8
Explanation: The first 7 terms of the Fibonacci series are 0, 1, 1, 2, 3, 5, 8.

*/

#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, nextNum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Handle edge cases for n=0, 1, 2
    if (n >= 1) {
        printf("%d", num1);
    }
    if (n >= 2) {
        printf(", %d", num2);
    }

    for (int count = 3; count <= n; count++) {
        nextNum = num1 + num2;
        printf(", %d", nextNum);
        num1 = num2;
        num2 = nextNum;
    }
    printf("\n");

    return 0;
}