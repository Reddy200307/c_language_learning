#include<stdio.h>
void main()
{
	char s[20],i;
	char *p=s;
	printf("enter a string\n");
	scanf("%[^\n]",s);
int c=0;
	for(i=0;p[i];i++)
	{
		if ( p[i]>='0' && p[i]<='9' )  
			c++;
	}
	printf("count=%d\n",c);
}
