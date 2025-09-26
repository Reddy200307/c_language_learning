/*

      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

*/
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1,k=0;i<=7;i=i+2,k++){
		for(j=i;j<=i&&j>k;j--)
			printf("%d",j);
			printf("\n");
	}
	return 0;
}
