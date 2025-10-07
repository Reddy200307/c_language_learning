#include<stdio.h>
void main()
{
	char s[25];
	int i,j,len,k,t,c;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	for(len=0;s[len];len++);

	for(i=0;s[i];i++)
	{
		c=i;
		for(;s[i]&&s[i]!=' ';i++);
		{
			k=i-1;
		}
		for(int j=c;j<k;j++,k--)
		{
			t=s[j];
			s[j]=s[k];
			s[k]=t;
		}
	}
	printf("%s\n",s);
}
