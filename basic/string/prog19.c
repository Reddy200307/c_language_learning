#include <stdio.h>
void main()
{
	char s[20],ch,ch1;
	printf("enterthe string\n");
	scanf("%s", s);
	printf("enter the char\n");
	scanf(" %c",&ch);
	int len,i,c=0;
	for(len=0;s[len];len++);
	for(i=len;i>=0;i--)
	{
		s[i+1]=s[i];
	}
	s[0]=ch;
	s[i]='\0';
	printf("%s",s);
}
