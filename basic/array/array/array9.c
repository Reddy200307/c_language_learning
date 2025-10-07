#include<stdio.h>
void main()
{
int a[5]={10,15,64,100,511},i,t,c=0,c1=0,pos;
for(i=0;i<5;i++){
t=a[i];
for(pos=31;pos>=0;pos--)
{
if(t>>pos&1)
c++;
else
c1++;
}
}
printf("set=%d clear=%d\n",c,c1);
}
