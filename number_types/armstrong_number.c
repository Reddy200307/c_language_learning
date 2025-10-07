#include<stdio.h>
int main(){
	int num,i,j,sum=0,pow=1,n,temp;
	printf("Enter the number :- ");
	scanf("%d",&num);

	for(temp=num;temp;temp=temp/10){
			n=temp%10;
			for(pow=1,i=1;i<=3;i++){
				pow=n*pow;
			}
			sum=sum+pow;
		}
		if(num==sum)
		printf("The num %d is armstrong \n",sum);
		else
			printf("Its not armstrong \n");
	
	return 0;
}
