#include<stdio.h>
int main()
{
	int a[10],i,j,n=6;
	printf("enter the array ele\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			for(j=i;j<n-1;j++)
			{		
				a[j]=a[j+1];
			}
		n--;
		i--;
	}}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
