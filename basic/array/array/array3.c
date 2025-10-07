#include <stdio.h>

void main() {
    int a[7] = {5, 3, 1, 2, 1, 9, 6};
    int i, j, t;

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 4; j++) {
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
}

