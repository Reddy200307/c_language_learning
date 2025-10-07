/*
A number is a perfect number if it is equal to the sum of its proper divisors, that is 
the sum of its positive divisors excluding the number itself
Input n=15
Op:- Its not a perfect number
Input n=6
Op:- It is a perfect number 
Divisors of 6 is 1,2,3 and 1+2+3=6 so its a perfect number
*/
#include<stdio.h>
int main(){
    int num,sum=0,i,j;
    printf("Enter the number :-");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num)
    printf("The number is %d and its perfect number \n",num,sum);
    else
    printf("The number is not a perfect number \n");
    return 0;
}