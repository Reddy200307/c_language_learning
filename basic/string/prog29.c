#include<stdio.h>
void main()
{
char s[20];
int i,j,c=0;
printf("enter a string\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
c++;
}
printf("vowels count = %d\n",c);
}
