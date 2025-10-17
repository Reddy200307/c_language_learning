/*
Write a C program that does the following for a given integer n:

Set the 2nd bit (make it 1).

Clear the 4th bit (make it 0).

Toggle the 1st bit (flip its value).

Example:
Input: n = 5 → binary 0101

After setting 2nd bit → 0111 (decimal 7)

After clearing 4th bit → 0011 (decimal 3)

After toggling 1st bit → 0010 (decimal 2)

*/
#include "print_binary.h"
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    int set_bit=n|(1<<1);
    print_binary(set_bit);
    printf("%d \n",set_bit);
    int clear_bit=set_bit&~(1<<2);
    print_binary(clear_bit);
    printf("%d \n",clear_bit);
    int toggle_bit=clear_bit^(1);
    print_binary(toggle_bit);
    printf("%d \n",toggle_bit);

}