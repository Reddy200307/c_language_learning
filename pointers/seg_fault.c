#include<stdio.h>
int main(){
	int a=10;
	int *p;
	int *r=(int *)&p;
    *r=100;
	printf("%d %d %d \n",a,*p,*r);
	return 0;

}