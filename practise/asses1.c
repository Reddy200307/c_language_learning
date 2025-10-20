/*
Write a c program to print the n number of alternate armstrong numbers

*/
#include<stdio.h>
int main(){
    int temp=0,n=0,digit=0,pow=1,number_power=0,i,sum=0,count=0,num=5;



    for(n=0;count<=num*10;n++){
    for(number_power=0,temp=n;temp;temp/=10,number_power++);

    for(temp=n,sum=0;temp;temp/=10){
        digit=temp%10;
        for(pow=1,i=1;i<=number_power;i++){
            pow*=digit;
        }
        sum=pow+sum;
    }
    if(sum==n ) 
    {
        printf("%d \n",sum);
        count++;
    }
}
return 0;
}