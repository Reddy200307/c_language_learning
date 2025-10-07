/*
Wap to print the strong numbers from 1 to 1000
op:-
The number 1 is strong number 
The number 2 is strong number 
The number 145 is strong number 


*/
#include<stdio.h>
int main(){
    int num,i,prod=1,n,sum=0,temp;
    for(num=1;num<=1000;num++)
    {
    for(temp=num,sum=0;temp;temp/=10){
        n=temp%10;
        for(i=1,prod=1;i<=n;i++){
            prod*=i;
        }
        sum=sum+prod;
    }
    if(sum==num)
    printf("The number %d is strong number \n",sum);
}
    return 0;
}