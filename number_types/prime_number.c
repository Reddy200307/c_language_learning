/*
A number is said to be prime number if the factors of the number is none than 1 and itself
Ex:- 2 factors is 2 and 1
Ex:- 7 factors is 7 and itself
*/
#include<stdio.h>
int main(){
    int num,n,j,count=0;
    printf("Enter the number:- ");
    scanf("%d",&num);
    for(n=1;n<=num;n++)
    {
        if(num%n==0)
        count++;
    }
    if(count==2)
    printf("%d is prime number \n");
    else
    printf("It is not prime number \n");
    return 0;
}
