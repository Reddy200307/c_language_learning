#include<stdio.h>

void main()
{
char s[20];
int i;
printf("enter the string\n");
scanf("%[^\n]",s);
for(i=0;s[i]&&s[i]!=' ';i++)
printf("%c",s[i]);
printf("\n");
}
