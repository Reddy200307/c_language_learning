#include<stdio.h>
void print_binary(int);
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	print_binary(num);
}
void print_binary(int n)
{
	int pos;
	for(pos=31;pos>=0;pos--)
		printf("%d",n>>pos&1);
	printf("\n");
}
