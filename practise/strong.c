#include<stdio.h>
int main(){
    int num=145,digit,sum=0,i,fact;
    for(int temp=num;temp;temp/=10){
        digit =temp%10;
        for( i=1,fact=1;i<=digit;i++){
            fact*=i;

        }
        sum+=fact;
    }
    if(num==sum){
        printf("its strong number :- \n");
    }
    else{
        printf("its not a strong number \n");
    }
    return 0;
}