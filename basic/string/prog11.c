#include<stdio.h>
void main()
{
char s[20];
int len,i,t,j;
printf("enter the string\n");
scanf("%[^\n]",s);

for(len=0;s[len];len++);

t=s[0];
s[0]=s[2];
s[2]=t;

printf("%s",s);
printf("\n");
}
