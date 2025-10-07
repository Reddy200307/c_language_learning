   #include<stdio.h>
void del_large_arr(int *,int);
void main()
{
	int i,ele,j,a[6];
	ele=sizeof(a)/sizeof(a[0]);	
	printf("enter the array ele\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	del_large_arr(a,6);
}
void del_large_arr(int *p,int ele)
{
	int i,j,l,sl,idx;
	l=p[0];
	idx=0;
	for(i=1;i<ele;i++)
	{
		if(p[i]>l)
		{
			l=p[i];
			idx=i;
		}
	}
	for(j=idx;j<ele;j++)
		p[j]=p[j+1];
	j--;
	ele--;
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
}





