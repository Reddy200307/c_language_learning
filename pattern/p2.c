/*
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10
*/
#include<stdio.h>
int main(){
	int i,j;
	for(i=2;i<=10;i=i+2){
		for(j=2;j<=i;j=j+2)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}
