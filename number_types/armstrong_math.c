#include<math.h>
#include<stdio.h>
int main(){
    int temp,num=153,result=0,r=0,n=0;
    for(temp=num;temp;temp/=10,n++);
    for(temp=num;temp;temp/=10){
        r=temp%10;
        result=result+(int)pow(r,n);
        printf("result = %d n=%d r=%d pow=%d \n",result,n,r,(int)pow(r,n));

    }

    return 0;
}