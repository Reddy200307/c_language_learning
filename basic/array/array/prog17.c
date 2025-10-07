#include<stdio.h>
void main()
{
	int a[6],i,j,t;
	printf("enter the array elements\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6-1;i++)
	{
		for(j=0;j<6-4;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
}
