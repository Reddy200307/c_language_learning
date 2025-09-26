/*
    A 
   A B 
  A B C 
 A B C D 
A B C D E 
 A B C D 
  A B C 
   A B 
    A 

*/

#include <stdio.h>

int main() {
    int rows = 5; // pyramid height (top half)

    // upper half including middle
    for (int i = 1; i <= rows; i++) {
        // spaces
        for (int s = 0; s < rows - i; s++) {
            printf(" ");
        }
        // letters A..i
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    // lower half
    for (int i = rows - 1; i >= 1; i--) {
        // spaces
        for (int s = 0; s < rows - i; s++) {
            printf(" ");
        }
        // letters A..i
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
