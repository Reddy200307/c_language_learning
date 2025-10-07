#include<stdio.h>
void main()
{
int a[6],i,j;
printf("enter te array elements\n");
for(i=0;i<6;i++)
scanf("%d",&a[i]);
a[0]=99;
a[1]=88;
for(i=0;i<6;i++)
printf("%d ",a[i]);
}
