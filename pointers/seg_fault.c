#include<stdio.h>
int main(){
	unsigned short int num=0xabcd;
	unsigned short int *p=&num;
	char *q=(char *)&num;
	printf("%x  %x %x %x \n",(unsigned char)*q,*p,*(p+1),num);
	*(q+1)=*(p+1);
	printf("%x  %x %x %x \n",(unsigned char)*q,*p,*(p+1),num);
	return 0;

}