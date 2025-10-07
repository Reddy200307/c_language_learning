#include<stdio.h>
int count_del_fun(int *,int,int);
void main()
{
	int a[6];
	int i,j,ele,b;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the ele\n");
	for(i=0;i<ele;i++)	
		scanf("%d",&a[i]);
	count_del_fun(a,b,ele);
}
int count_del_fun(int *p,int q,int ele)
{
	int i,j;
	for(i=0;i<ele;i++)
	{
		if(p[i]<=0)
		{
			for(j=i;j<ele-1;j++)
			{		
				p[j]=p[j+1];
			}
		ele--;
		i--;
	}}
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
}
