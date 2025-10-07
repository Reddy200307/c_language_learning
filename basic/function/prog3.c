#include<stdio.h>
void del_fun(int *,int);
void main()
{
int a[6],b[6],i,j,ele;
printf("enter the ele\n");
for(i=0;i<6;i++)
scanf("%d",&a[i]);
del_fun(a,ele);
}
void del_fun(int *p,int ele)
{
	int i,temp,div;
	for(i=0;i<6;i++)
	{
		temp=p[i];
		div=1;
		for(;temp>=10;temp=temp/10)
		{
			div=div*10;
		}
		p[i]=p[i]%div;
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",p[i]);
	}
}

