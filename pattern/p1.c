/*
1
1 3
1 3 5
1 3 5 7
*/
#include<stdio.h>
int main(){
	int i ,j;
	for(i=1;i<=7;i=i+2){
		for(j=1;j<=i;j=j+2){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
