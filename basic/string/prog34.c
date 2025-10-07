#include<stdio.h>
void main()
{
	char s[20];
	int i,j,len,k,c=0,flag;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(len=0;s[len];len++);

	for(i=0;i<len;i++)
	{
		for(k=i-1,flag=0;k>=0;k--)
			if(s[i]==s[k])
			{
				flag=1;break;
			}
		if(flag==0)
		{		
			c=1;
			for(j=i+1;s[j];j++)
				if(s[i]==s[j])
					c++;
			if(c>1)
				printf("%c----->%d times\n",s[i],c);
		}	}}
