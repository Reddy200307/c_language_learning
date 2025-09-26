/*
1
1 2
1 2 4
1 2 4 7
1 2 4 7 11
*/
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=6;i++){
		for(j=1,k=0;j<i;k++){

			printf("%d ",j+k);
			j=j+k;
		}
			printf("\n");
	}
	return 0;
}
