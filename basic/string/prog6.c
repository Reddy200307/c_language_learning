#include<stdio.h>
void main()
{
char s[20];
int i,pos;
printf("enter the string\n");
scanf("%[^\n]",s);
for(i=0;s[i];i++)
{
for(pos=31;pos>=0;pos--)
{
if(s[i]!=' ')
printf("%d",s[i]>>pos&1);
}
printf("\n");
}
}
