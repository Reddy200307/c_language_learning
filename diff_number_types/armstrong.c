/*

An Armstrong number (also known as a narcissistic number or pluperfect digital invariant) is a number that is 
equal to the sum of its own digits, each raised to the power of the number of digits in the number.                
For example:     
153 is a 3-digit Armstrong number because (1^{3}+5^{3}+3^{3}=1+125+27=153). 
1634 is a 4-digit Armstrong number because (1^{4}+6^{4}+3^{4}+4^{4}=1+1296+81+256=1634).

*/
#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to compute base^exp using a loop (no math.h)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is Armstrong
int isArmstrong(int n) {
    int sum = 0;
    int digits = countDigits(n);
    int temp = n;

    for (int i = 0; temp != 0; i++) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}
