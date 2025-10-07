#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the char\n");
	scanf(" %c",&ch); 
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}
	printf("%s\n",s);
}
