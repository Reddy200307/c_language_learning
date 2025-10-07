/*
53 59 61 67 71
 59 61 67 71
  61 67 71
   67 71
    71
*/
#include <stdio.h>

int is_prime(int num);

int main() {
    int start = 53;   // first prime
    int end_count = 5; // how many primes in the first row

    for (int row = 0; row < 5; row++) {
        // print spaces for triangle alignment
        for (int s = 0; s < row; s++) printf(" ");

        int count = 0;       // primes printed in this row
        int num = start;     // start candidate

        // skip 'row' primes (so each row starts further)
        int skip = row;
        while (skip > 0) {
            if (is_prime(num)) skip--;
            num++;
        }

        // print remaining primes
        while (count < (end_count - row)) {
            if (is_prime(num)) {
                printf("%d ", num);
                count++;
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

