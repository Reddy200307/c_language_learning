#include<stdio.h>
void main()
{
	int a[5],i,n=5,j=0;
	printf("enter the array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i!=2&&i!=3)
		{
			a[j++]=a[i];
		}
	}
n=j;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
