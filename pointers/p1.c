#include<stdio.h>
#include "../practise/print_binary.h"
int main(){
	int a=-1;
	char *pA=(char *)&a;
	printf("Before %d \n",a);
	print_binary(a);
	printf("\n");
	*pA=1;
	printf("After %d \n",a);
	print_binary(a);
    return 0;
}