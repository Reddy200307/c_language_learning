/*
The number is said to be palindrome if the reversed number is equal to the original number

*/
#include<stdio.h>
int main(){
    int num,rev_num=0,n,temp;
    printf("Enter the Number to find the palindrome :- ");
    scanf("%d",&num);
    for(temp=num;temp;temp/=10){
        n=temp%10;
        rev_num=rev_num*10+n;
    }
    if(rev_num==num)
    printf("%d is palindrome number \n");
    else
    printf("Its is not a palindrome number \n");


    return 0;
}