#include<stdio.h>
void main()
{
	int a[10];
	int ele,i,j,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			for(j=i+1;j<ele;j++)
			{
				if(a[i]==a[j])
				{
					for(k=j;k<ele-1;k++)
					{
						a[k]=a[k+1];
					}
					ele--;
					j--;
				}
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}
