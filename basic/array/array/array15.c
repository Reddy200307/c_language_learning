#include<stdio.h>
void main()
{
int a[6],i,j,l,sl,ele,t;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the array ele:\n");
for(i=0;i<ele;i++){
scanf("%d",&a[i]);
}
t=a[3];
a[3]=a[4];
a[4]=t;
for(i=0;i<6;i++)
printf("%d ",a[i]);
}
