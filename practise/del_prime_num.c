#include<stdio.h>
int main(){
    int num=123456,temp,digit,i,status,rev_num=0,orig_num=0;
    for(temp=num;temp;temp/=10){
        digit=temp%10;
        for(i=2;i<digit;i++){
            if(digit%i==0)
            break;
            
        }
        if(i==digit)
        status=1;
        else
        status=0;
        if(!status){
            orig_num=orig_num*10+digit;
        }
    }
    for(temp=orig_num;temp;temp/=10)
    {
        digit=temp%10;
        rev_num=rev_num*10+digit;
    }
    printf("The original number is :- %d ",num);
    printf("%d \n",rev_num);
    return 0;
}