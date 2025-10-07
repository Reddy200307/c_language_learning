#include<stdio.h>
void sum_fun(int *,int *,int);
void main()
{
	int a[5],i,j,b[5],ele;
	printf("enter the array elements\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("before : %d \n",a[i]);
	sum_fun(a,b,ele);
}
void sum_fun(int *p,int *q,int ele)
{
	int i,r=0,sum=0,num=0,a[5];
	for(i=0;i<5;i++)
	{
		num=p[i];
		for(sum=0;num;num=num/10)
		{
			r=num%10;
			sum=sum+r;
}
	
		q[i]=sum;
	}
printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",q[i]);
}
