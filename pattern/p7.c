/*
A 1 B 2 C
A 1 B 2
A 1 B
A 1
A

*/
#include<stdio.h>
int main(){
	int i,j,k,c;
	for(i=5;i<=5&&i>=0;i--){
		for(j=0,c=0,k=0;j<i;j++)
		{
			if(j%2==0){
				printf("%c",'A'+c);
				c=c+1;
				}
			else{
				k=k+1;
				printf("%d",k);
			}
		}
		printf(" \n");
		}
	return 0;
}
