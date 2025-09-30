#include <stdio.h>

int main() {
    int a = 512;      // some variable
    int b = 999;      // another variable, stored *next to a* on the stack

    char *p = (char*)&a;  // point to a, but treat it as bytes

    printf("Before corruption:\n");
    printf("a = %d, b = %d\n", a, b);

    // Now we move beyond 'a' (4 bytes for int) and touch memory of 'b'
    *(p + sizeof(int)) = 0;   // overwrite 1st byte of 'b'
    p=p+6;
    *p=0;
    printf("\nAfter corruption:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
