/*
F E D C B A
 E D C B A
  D C B A
   C B A
    B A
     A

*/
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=5;i<6&&i>=0;i--){
        	for(k=0;k<6-i;k++)
	        	printf(" ");
		for(j=i;j<=i&&j>=0;j--){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}

	return 0;
}
