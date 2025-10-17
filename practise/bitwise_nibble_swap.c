/*
Input: n = 100 → binary 01100100

Swap nibbles → 01000110 → Output: 70
*/
#include<stdio.h>
#include "print_binary.h"
int main(){
    unsigned char n,r1,r2,r3;
    printf("Enter the number bw 0 to 255:- ");
    scanf("%hhu",&n);
    print_binary_char(n);
    r1=n&0x0F;
    r1=r1<<4;
    r2=n&0xF0;
    r2=r2>>4;
    r3=r1|r2;
    print_binary_char(r3);
    printf("The number after swap is %hhu \n",r3);
    return 0;
}