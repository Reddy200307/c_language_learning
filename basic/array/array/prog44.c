#include<stdio.h>
void main()
{
	int a[7];
	int i,j,ele,c=0,t,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		if(a[i]==0)
		{
			t=a[i];
			for(j=i;j>=0;j--)
				a[j]=a[j-1];
		a[0]=t;
		}
	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
}
