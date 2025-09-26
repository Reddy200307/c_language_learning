/*
      A  
      C  B  
    E  D  C  
  G  F  E  D  
I  H  G  F  E  


*/

#include <stdio.h>

int main() {
    int rows = 5;   // number of rows
    char start = 'A';

    for (int i = 1; i <= rows; i++) {
        // print spaces for centering
        for (int s = 0; s < rows - i; s++) {
            printf("  ");  // two spaces for alignment
        }

        // print decreasing characters
        for (int j = 0; j < i; j++) {
            printf("%c  ", start - j);
        }

        printf("\n");
        start += 2;  // next row starts 2 letters ahead
    }

    return 0;
}
