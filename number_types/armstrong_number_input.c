/*

 Wap to find wether the given number is armstrong or not 
Input:- 153
op:- the number 153 is armstrong 
Input :- 217
op:- the number is not armstrong 
Input :- 1634
Op:- the number is armstrong 

*/
#include<stdio.h>
int main(){
	int num,i,j,sum=0,pow=1,n,temp,count=0;
	printf("Enter a number to check armstrong or not ");
	scanf("%d",&num);
	for(temp=num;temp;temp/=10,count++);
	for(sum=0,temp=num;temp;temp=temp/10){
			n=temp%10;
				for(pow=1,i=1;i<=count;i++){
					pow=n*pow;
				} 
				sum=sum+pow;
			}
			if(num==sum)
			printf("The num %d is armstrong \n",sum);
			else
			printf("The number is not armstrong \n");
	return 0;
}