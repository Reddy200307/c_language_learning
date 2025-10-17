/*

    *
   * *
  *   *
 *     *
*********


*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int space = n - row; space > 0; space--)
            printf(" ");
        for (int col = 1; col <= 2*row - 1; col++) {
            if (row == n || col == 1 || col == 2*row - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
