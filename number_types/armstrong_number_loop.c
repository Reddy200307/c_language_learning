/*
 Wap to find the first five armstrong number from 100
op:- 153 370 371 407 1634 

*/


#include<stdio.h>
int main(){
	int num=153,i,j,sum=0,pow=1,n,temp,count=0;
	for(num=100;;num++){
	for(sum=0,temp=num;temp;temp=temp/10){
			n=temp%10;
			if(num<1000)
			pow=n*n*n;
			else
			pow=n*n*n*n;
			sum=sum+pow;
		}
		if(num==sum){
		printf("The num %d is armstrong \n",sum);
		count++;
	}
		if(count==5)
			break;

	}
	return 0;
}
