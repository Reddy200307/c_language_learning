/*
Write a C program that takes an integer n from the user and prints the sum of all even numbers from 1 to n using a for loop.

Example:
Input: n = 10
Output: Sum of even numbers = 30
*/
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number to find the sum of even numbers :-");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2==0)
        sum+=i;
    }
    printf("The sum of all the even numbers until %d is :-  %d \n",num,sum);
    return 0;
}