#include<stdio.h>
void main()
{
	char s[20];
	int i,j,len,k;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(len=0;s[len];len++);

	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;k<len;k++)
					s[k]=s[k+1];
				len--;
				j--;
			}
		}
	}
	printf("%s\n",s);
}
