/*
Wap to print the perfect numbers from 1 to 1000
op:-6 28 496 
*/
#include<stdio.h>
int main(){
    int num,i,j,sum;
    for(num=1;num<=1000;num++){
    for(i=1,sum=0;i<num;i++){
        if(num%i==0){
            sum+=i;
        }

    }
    if(sum==num)
    printf("%d ",sum);
}
printf("\n");
    return 0;
}