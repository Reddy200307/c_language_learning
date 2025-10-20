/*
Write a c program to clear m and nth bit of a number using pointer
*/
#include<stdio.h>
#include "print_binary.h"
int main(){
    int num=100,m=5,n=2,temp;
    int * pNUM=&num;
    printf("Enter the number:- ");
    scanf("%d",&num);
    printf("Enter the m and nth bit pos:- ");
    scanf("%d %d",&m,&n);
    printf("The number before clear is:- ");
    print_binary(num);
    temp=num;
    *pNUM=*pNUM&~((1<<m)|(1<<n));
    printf("The number after clear is:- ");
    print_binary(num);
    //or
    num=temp;
    printf("The same thing using for loop is:-\n");
    printf("The number before clear is:- ");
    print_binary(num);
    for(int i=31;i>=0;i--){
        if(i==m|| i==n)
        *pNUM=*pNUM&~(1<<i);
    }
    printf("The number after clear is:- ");
    print_binary(num);


    return 0;
}
