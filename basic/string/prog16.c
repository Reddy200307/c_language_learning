#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,c=0,k;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{

			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}
	printf("%s\n",s);
}
