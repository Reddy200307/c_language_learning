#include<stdio.h>
void main()
{
char s[20];
int i,r,j,sum,temp,mul;
printf("enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++);
{
sum=0;
for(temp=i;temp;temp=temp/10)
r=temp%10;
for(j=0,mul;j<=r;j++)
mul=mul*j;
sum=sum+mul;
}
if(sum==i)
printf("%d is strong number\n",i);
else
printf("%d is not strong number\n",i);
}
