#include<stdio.h>
void main()
{
int a[6],i,j,t;
int *p,*q;
printf("enter the arry elements\n");
for(i=0;i<6;i++)
scanf("%d",&a[i]);
p=&a[0];
q=&a[5];

t=*p;
*p=*q;
*q=t;


for(i=0;i<6;i++)
printf("%d",a[i]);
}
