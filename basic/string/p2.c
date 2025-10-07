#include<stdio.h>
void main()
{
char s[20],i;
printf("enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++);
printf("length of string: %d\n",i);
}
