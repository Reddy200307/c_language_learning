#include<stdio.h>
int main(){
    int num=-1;
	short int *p=(short int *)&num;
	*p=0;
	num=num>>16;
	printf("%\n",num);
    return 0;
}