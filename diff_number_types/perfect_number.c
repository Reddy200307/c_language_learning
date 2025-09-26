/*
A number is a perfect number if it is equal to the sum of its proper divisors, that is, the sum of its positive divisors excluding the number itself

Input: n = 15
Output: false
Explanation: Divisors of 15 are 1, 3 and 5. Sum of divisors is 9 which is not equal to 15.

Input: n = 6
Output: true
Explanation: Divisors of 6 are 1, 2 and 3. Sum of divisors is 6.

*/

#include <stdio.h>

int main() {
    int number, i, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for invalid input (non-positive numbers)
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Loop through all numbers from 1 up to (but not including) the given number
    for (i = 1; i < number; i++) {
        // If 'i' is a divisor of 'number', add it to the sum
        if (number % i == 0) {
            sum += i;
        }
    }

    // Compare the sum of divisors with the original number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0; // Indicate successful program execution
}