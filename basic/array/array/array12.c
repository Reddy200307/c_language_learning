#include<stdio.h>
void main()
{
int a[6]={2,2,3,5,5,4},t,i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]<a[j+1])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d\n",a[0]);
}
