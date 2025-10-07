#include<stdio.h>
void main()
{
	int a[5];
	int i,j,k,sum,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
			if(a[i]%j==0)
		
				sum=sum+j;
				if(sum==a[i])
				{
					printf("num=%d pos=%d\n",a[i],i);
					break;
				}}
}
