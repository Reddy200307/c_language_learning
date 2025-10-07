#include<stdio.h>
int strong_fun(int *,int );
int armstrong_fun(int *,int);
void main()
{
	int ele,i,j,a[6],b;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the ele\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	strong_fun(a,ele);
	armstrong_fun(a,ele);
}
int strong_fun(int *p,int ele)
{
	int i,j,num,mul,t,sum,fact,digit,c=0;
	for(i=0;i<6;i++)
	{
		num=p[i];
		t=num;
		sum=0;
		while(num>0)
		{
			digit=num%10;
			fact=1;
			for(j=1;j<=digit;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			num=num/10;
		}
		if(sum==t)
		{
			c++;
		}
	}
	printf("strong count = %d\n",c);
	return c;
}
int armstrong_fun(int *q,int ele)
{
	int i,j,mul,num,c1=0,c3=0,sum=0,r,t;
	for(i=0;i<6;i++)
	{
		num=q[i];
		sum=0;
		t=num;
                c3=0;
		for(;num;num=num/10)
		{
			c3++;
		}
		num=q[i];
		for(;num;num=num/10)
		{
			r=num%10;
			mul=1;
			for(j=0;j<c3;j++)
			{
				mul=mul*r;
			}
			sum=sum+mul;
		}

		if(sum==t)
		{
			c1++;
		}
	}
printf("armstorng number count = %d\n",c1);
return c1;
}
