#include<stdio.h>
void main()
{
	char s[20];
	int i=0,in=0,wc=0;
	printf("enter the string\n");
	scanf("%[^\n]",s);
l:
	if(s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			if(in==0)
			{
				wc++;
				in=1;
			}
		}
		else
		{
			in=0;
		}
		i++;
		goto l;
	}
printf("word count =%d\n",wc);
}
