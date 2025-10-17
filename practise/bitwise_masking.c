/*
nput: n = 10 → binary 1010 → 3rd bit is 1 → Output: “Set”

Input: n = 8 → binary 1000 → 3rd bit is 0 → Output: “Not set”
*/
#include<stdio.h>
#include "print_binary.h"
int main(){
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    printf("Before :- \n");
    print_binary(n);
    int mask=n&0x4;
    printf("The mask value is :- \n");
    print_binary(mask);
    if(mask)
    printf("3rd bit is set \n");
    else
    printf("The 3rd bit is not set \n");

    return 0;
}