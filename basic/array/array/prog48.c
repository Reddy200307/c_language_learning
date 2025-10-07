#include<stdio.h>
void main()
{
	int a[8];
	int i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i==j)
			a[i]=0;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}
