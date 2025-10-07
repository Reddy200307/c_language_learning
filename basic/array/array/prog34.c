#include<stdio.h>
void main()
{
	int a[7],i,j,ele,count=0,p[10];
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)

		{
			p[count]=a[i];
			count++;
		}
	}
	printf("prime count=%d\n",count);
	for(i=0;i<count;i++)
		printf("%d ",p[i]);
	printf("\n");
}
