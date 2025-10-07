#include <stdio.h>

int main() {
    float f = 23.5;
    unsigned char *char_ptr = (unsigned char *)&f;

    // Start from last valid byte (index 3)
    char_ptr += 3;

    for (int j = 3; j >= 0; j--, char_ptr--) {
        for (int i = 7; i >= 0; i--) {
            printf("%d", (*char_ptr >> i) & 1);
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
