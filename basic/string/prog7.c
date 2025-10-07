#include<stdio.h>
void main()
{
char s[20],i;
int pos,c;
printf("enter the string\n");
scanf("%s",s);
for(i=0,c=0;s[i];i++)
{
for(pos=31,c=0;pos>=0;pos--)
if(s[i]>>pos&1)
c++;
printf("count=%d ",c);
}
printf("\n");
}
