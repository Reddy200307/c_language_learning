#include<stdio.h>
void main()
{
int i,j=0;
int a[3]={1,5,7};
int b[3]={11,22,33};
int c[6];
for(i=0;i<3;i++)
{
c[j++]=a[i];
c[j++]=b[i];
}
for(i=0;i<6;i++)
printf("%d ",c[i]);
}
