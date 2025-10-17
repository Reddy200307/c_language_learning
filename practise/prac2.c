/*
Write a C program that reverses the digits of a given integer using a for loop.

Example:
Input: n = 12345
Output: Reversed number = 54321

*/

#include<stdio.h>
int main(){
    int num=12345,rev_num=0,digit;
    for(int i=num;i;i/=10){
        digit=i%10;
        rev_num=rev_num*10+digit;
    }
    printf("%d \n",rev_num);
    return 0;
}