#include<stdio.h>
int main(){
   int *a;
   int *b=a;
   *b=100;
            printf("%d \n", *a);
	return 0;

}