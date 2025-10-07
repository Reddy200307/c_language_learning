#include<stdio.h>
void main()
{
	char s[20];
	int i,j;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	if(s[0]>='a'&&s[0]<='z')
	{
		s[0]=s[0]-32;
	}
	for(j=1;s[j];j++)
	{
		if(s[j-1]==' '&&s[j]>='a'&&s[j]<='z')
		{
			s[j]=s[j]-32;
		}
	}
	printf("%s",s);
}
