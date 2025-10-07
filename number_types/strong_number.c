/*
A strong number is a positive integer where the sum of the factorials of its individual digits equal to the original number .
For example 145 is a strong number because 
1!+4!+5!=1+24+120=145

*/
#include<stdio.h>
int main(){
    int num,i,prod=1,n,sum=0,temp;
    printf("Enter the number :- ");
    scanf("%d",&num);
    for(temp=num,sum=0;temp;temp/=10){
        n=temp%10;
        for(i=1,prod=1;i<=n;i++){
            prod*=i;
        }
        sum=sum+prod;
    }
    if(sum==num)
    printf("The number %d is strong number \n",sum);
    else
    printf("The number is not strong number \n");
    return 0;
}