/*
 
 13579
 579
 79
 9
*/
#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1,k=0;i<=9;i=i+2,k++){
		for(l=0;l<k;l++)
			printf(" ");

		for(j=i;j<=9;j=j+2)
			printf("%d",j);
			printf("\n");
	}
	return 0;
}
