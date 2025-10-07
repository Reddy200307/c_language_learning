#include<stdio.h>
void main()
{
	int a[6],i,j,ele,n=6,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enetr the ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}				
				j--;
				n--;
			}

		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
