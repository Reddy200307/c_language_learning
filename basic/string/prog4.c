#include<stdio.h>
void main()
{
char s[20],i;
printf("enter the striing\n");
scanf("%s",s);
for(i=0;s[i];i++)
{
printf("%c %d %o %x\n",s[i],s[i],s[i],s[i]);
}
}

