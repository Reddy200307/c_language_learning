#include<stdio.h>
void main()
{
int a[7],i,j,s,ss,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array ele:\n");
for(i=0;i<ele;i++){
scanf("%d",&a[i]);
}
if(a[0]<a[1])
{
s=a[0];
ss=a[1];
}
else if(a[1]<=a[0])
{
s=a[1];
ss=a[0];
}
for(i=2;i<7;i++)
{
if(a[i]>s)
{
ss=s;
s=a[i];
}
else if(a[i]<ss && a[i]!=s)
ss=a[i];
}
printf("second smallest=%d\n",ss);
}
