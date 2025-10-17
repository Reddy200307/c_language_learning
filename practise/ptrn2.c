/*
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int space=n-1;space>=row;space--)
        printf(" ");
        for(int col=1;col<=row;col++){
            printf("%d",col);
        }
        for (int col = row - 1; col >= 1; col--)
        printf("%d", col);
        printf(" \n");
    }
    return 0;
}