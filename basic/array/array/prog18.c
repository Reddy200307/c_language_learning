#include<stdio.h>
void main()
{
	int a[7],i,j,idx,num;
	printf("enter the array elements\n");
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	printf("enter the index\n");
	scanf("%d",&idx);
	printf("enter the num\n");
	scanf("%d",&num);
	idx=num;
	a[0]=idx;
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
}
