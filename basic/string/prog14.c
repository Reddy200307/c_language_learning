#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,c=0,k;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		for(j=i;s[j];j++)
			s[j]=s[j+1];
		break;
	}
	printf("%s\n",s);
}
