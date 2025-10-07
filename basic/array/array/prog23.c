#include<stdio.h>
void main()
{
int i,j=0;
int a[2]={1,5};
int b[4]={11,22,33,44};
int c[6];
for(i=0;i<2;i++)
{
c[j++]=a[i];
c[j++]=b[i];
}
for(;i<4;i++)
c[j++]=b[i];
for(i=0;i<6;i++)
printf("%d ",c[i]);
}
