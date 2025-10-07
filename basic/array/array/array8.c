#include<stdio.h>
void main()
{
int a[5],i;
printf("enter the ele \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
{
a[i]=a[i]>>1;
}

for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
}
