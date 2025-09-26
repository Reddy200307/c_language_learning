/*
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 

*/


#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        // spaces for centering
        for (int s = 0; s < rows - i; s++) {
            printf("  ");
        }

        // increasing part
        int num = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        // decreasing part
        num -= 2;
        for (int j = 1; j < i; j++) {
            printf("%d ", num--);
        }

        printf("\n");
    }

    return 0;
}
