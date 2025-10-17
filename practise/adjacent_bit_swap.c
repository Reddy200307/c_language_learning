/*

*/
#include<stdio.h>
#include"print_binary.h"
int main(){
    unsigned char n,r1,r2,swaped_bit;
    int count_1=0,count_0=0;
    printf("enter the number between 0 to 255 :- ");
    scanf("%hhu",&n);
    print_binary_char(n);
    r1=n&0x55555555;
    r1<<=1;
    r2=n&0xAAAAAAAA;
    r2>>=1;
    swaped_bit=r1|r2;
    print_binary_char(swaped_bit);
}

