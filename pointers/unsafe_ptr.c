#include <stdio.h>

int main() {
    int a = 512;      // some variable
    int b = 999;      // another variable, stored *next to a* on the stack

    char *p = (char*)&a;  // point to a, but treat it as bytes

    printf("Before corruption:\n");
    printf("a = %d addr=%p, b = %d addr = %p \n", a,p, b,&b);
      p=p-4;
    *p=0;
    printf("\nAfter corruption:\n");
    printf("a = %d addr=%p, b = %d addr=%p\n", a,p, b,&b);

    return 0;
}
