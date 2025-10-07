#include<stdio.h>
void main()
{
char s[20];
int i,j,k,t;
printf("enter the string\n");
scanf("%[^\n]",s);
for(i=0;s[i];i++);
for(j=i-1;j>=0;j--)
printf("%c",s[j]);
printf("\n");
}
