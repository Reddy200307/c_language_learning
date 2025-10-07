#include<stdio.h>
void main()
{
	char s[20];
	int i,j,len;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(i=0,len=0;s[i];i++)
	{
		if(s[i]!=' ')
			len++;
		else
		{
			printf("%d",len);
			len=0;
		}
	}
	printf("%d\n",len);
}
