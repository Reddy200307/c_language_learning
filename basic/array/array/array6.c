#include<stdio.h>
void main()
{
int a[6]={12,234,321,45,654,1234},i,temp,div;
for(i=0;i<6;i++)
{
temp=a[i];
div=1;
while(temp>=10)
{
temp=temp/10;
div=div*10;
}
a[i]=a[i]%div;
}
for(i=0;i<6;i++)
{
printf("%d ",a[i]);
}
}

