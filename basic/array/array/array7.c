#include<stdio.h>
void main()
{
int a[5]={10,100,1000,100,10},i,temp,pos;

for(i=0;i<5;i++){
for(pos=31;pos>=0;pos--)
{
printf("%d",a[i]>>pos&1);
}
printf("\n");
}
}
