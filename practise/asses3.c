/*
Write a c program to print number of set bits in a nibble using short int pointer.
*/
#include <unistd.h>
#include<stdio.h>
#include "print_binary.h"
int main(){
    int num,count=0,k;
    printf("Enter the number :- ");
    scanf("%d",&num);
    unsigned short int * pNUM=(unsigned short int*)&num;
    for(int i=0;i<2;i++,pNUM++)
    {
        printf("The binary is : \n");
        print_binary_short_int(*pNUM);
        for(int j=0;j<16;j=j+4){
            for(k=j,count=0;(k<(j+4)&&k<16);k++){
                printf("%d ",*pNUM>>k&1);
                if((*pNUM>>k)&1)
                count++;
            }
            printf("The set bits in the binary nibble is %d \n",count);
        }
    }
    return 0;
}