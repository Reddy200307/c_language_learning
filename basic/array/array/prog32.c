#include<stdio.h>
void main()
{
	int a[5],i,j,ele,mul,num,r;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter a array ele\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(num=a[i],mul=1;num;num=num/10)
		{
			r=num%10;
			mul=mul*r;
		}
		a[i]=mul;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}
