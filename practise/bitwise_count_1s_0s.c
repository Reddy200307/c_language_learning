/*
Input: n = 13 → binary 00001101

Output: 1s = 3, 0s = 5

*/
#include<stdio.h>
#include"print_binary.h"
int main(){
    unsigned char n;
    int count_1=0,count_0=0;
    printf("enter the number between 0 to 255 :- ");
    scanf("%hhu",&n);
    for(int i=7;i>=0;i--){
        if(n>>i&1)
        count_1++;
        else
        count_0++;
    }
    print_binary_char(n);
    printf("The number of 1's is:- %d and 0's is:- %d \n",count_1,count_0);
}