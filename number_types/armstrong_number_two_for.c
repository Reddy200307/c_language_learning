/*
 Wap to find the first five armstrong number from 100
op:- 153 370 371 407 1634 

*/

#include<stdio.h>
int main(){
	int num,i,j,sum=0,pow=1,n,temp,count=0;
	for(num=100;;num++){

	for(sum=0,temp=num;temp;temp=temp/10){
			n=temp%10;
			if(num<1000){
				for(pow=1,i=1;i<=3;i++){
					pow=n*pow;
				} 
			}
			else{
				for(pow=1,i=1;i<=4;i++){
					pow=n*pow;
				} 

			}
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
