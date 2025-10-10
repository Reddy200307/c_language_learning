#include<stdio.h>
int main(){
	int a=10;
	int *p;
	int *r=(int *)&p;
    *r=100;
	printf("%d %d \n",a,*r+50);
	return 0;

}