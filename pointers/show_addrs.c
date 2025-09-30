#include <stdio.h>
#include <stdint.h>

int main(void) {
    volatile int a = 512;
    volatile int b = 999;

    unsigned char *pa = (unsigned char *)&a;
    unsigned char *pb = (unsigned char *)&b;

    printf("&a = %p, &b = %p\n", (void*)pa, (void*)pb);

    printf("bytes around a: ");
    for (int i = -4; i < 8; ++i)
        printf("%02x ", *(pa + i));
    putchar('\n');

    return 0;
}
