#include<stdio.h>
void main()
{
	int a[5],i,j,n=5;
	printf("enter the array ele\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
