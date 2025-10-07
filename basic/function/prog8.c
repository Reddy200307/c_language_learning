#include<stdio.h>
void in_fun(int *, int *, int *,int ,int , int  );
void main()
{
	int i,j=0,n,ele1,ele2,ele3;
	int a[3]={1,5,7};
	int b[3]={11,22,33};
	int c[6];
        in_fun(a, b, c,ele1,ele2, ele3 );

}
void in_fun(int *p, int *q, int *r,int ele1,int ele2, int ele3 )


{
	int j,i;
	for(i=0;i<3;i++)
	{
		p[j++]=q[i];
		p[j++]=r[i];
	}
	for(i=0;i<6;i++)
		printf("%d ",p[i]);
}
