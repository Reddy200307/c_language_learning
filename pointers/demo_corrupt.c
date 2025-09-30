/* demo_corrupt.c — deliberate UB to demonstrate out-of-bounds writing */
#include <stdio.h>
int main(void) {
    volatile int a = 512;          /* keep these volatile to discourage registers */
    volatile int b = 999;
    unsigned char *p = (unsigned char *)&a;

    printf("Before corruption:\n");
    printf("a = %d, b = %d\n", a, b);

    /* Move past a's 4 bytes and overwrite the first byte of b.
       This is out-of-bounds and therefore UB, but with -O0/Simple layout
       it typically hits b's first byte on the stack. */
    p[4] = 0x00;   /* overwrite low-order byte of b (little-endian) */

    printf("\nAfter corruption:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
