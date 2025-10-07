#include<stdio.h>
void rotate_fun(int *,int,int);
void main()
{
	int a[6];
	int i,j,ele,b,n;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the ele\n");
	for(i=0;i<ele;i++)	
		scanf("%d",&a[i]);
	printf("enter the nuber of rotation\n");
	scanf("%d",&n);
b=n;
	rotate_fun(a,b,ele);
}
void rotate_fun(int *p,int q,int ele)
{
	int i,j,k,n,temp;
		for(j=0;j<q;j++)
		{
			temp=p[ele-1];
				for(k=ele-2;k>=0;k--)
					p[k+1]=p[k];
				p[0]=temp;
		}
	
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
}
