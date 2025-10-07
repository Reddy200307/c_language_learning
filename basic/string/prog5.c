#include<stdio.h>
void main()
{
char s[20],i,sum;
printf("enter the string\n");
scanf("%[^\n]",s);
char *cp;
for(i=0,sum=0;s[i];i++)
{
cp=&s[i];
if(*cp>='0'&&*cp<='9')
{
sum=sum+*cp-48;
}
}
printf("sum=%d\n",sum);
}
