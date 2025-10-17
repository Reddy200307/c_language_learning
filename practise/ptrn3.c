/*
*****
*   *
*   *
*   *
*****


*/
#include<stdio.h>
int main(){
    int num=5;
    for(int row=1;row<=num;row++){
        for(int col=1;col<=num;col++)
        {
            if((col==1||col==num)||(row==1||row==num))
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}