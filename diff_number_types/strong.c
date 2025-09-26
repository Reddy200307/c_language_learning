/*
A strong number is a positive integer where the sum of the factorials of its individual digits equals the original number. 
For example, 145 is a strong number because 
1! + 4! + 5! = 1 + 24 + 120 = 145

*/
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, digit;
    long long sumOfFactorials = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Calculate the sum of factorials of digits
    while (num > 0) {
        digit = num % 10; // Get the last digit
        sumOfFactorials += factorial(digit); // Add factorial of the digit to the sum
        num /= 10; // Remove the last digit
    }

    // Check if the sum of factorials equals the original number
    if (sumOfFactorials == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}