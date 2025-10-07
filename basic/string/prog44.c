#include<stdio.h>
void main()
{
char m[]="123 abc",s[]="abc";

int i,j;

for(i=0;m[i];i++)
{
	if(m[i]==s[0])
	{
		for(j=1;s[j];j++)
		{
			if(m[i+j]!=s[j])
				break;
		}
		if(s[j]=='\0')
		{
			printf(" yes present\n");
			return;
		}
	}
}
printf("not present\n");
}
