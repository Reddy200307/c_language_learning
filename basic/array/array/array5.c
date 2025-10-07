#include<stdio.h>
void main()
{
	int a[5]={123,23,89,3425,721};
	int i,r,sum=0;
	for(i=0;i<5;i++)
	{
		for(;a[i]>=10;a[i]/=10);
		
			
				r=a[i]%10;
		
		sum=sum+r;
	}
		printf("%d",sum);
}
