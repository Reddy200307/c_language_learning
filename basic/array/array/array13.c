#include<stdio.h>
void main()
{
int a[7],i,j,l,sl,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array ele:\n");
for(i=0;i<ele;i++){
scanf("%d",&a[i]);
}
if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else if(a[1]>=a[0])
{
l=a[1];
sl=a[0];
}
for(i=2;i<7;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl && a[i]!=l)
sl=a[i];
}
printf("second largest=%d\n",sl);
}
