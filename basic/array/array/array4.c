#include <stdio.h>

void main() {
    int a[5] = {10, 20, 30, 40, 50}, i, sum;
    for (i = 0, sum = 0; i < 5; i++) {
        sum = sum + a[i];
    }
    printf("%d ", sum);
}

