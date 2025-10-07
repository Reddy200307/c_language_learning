#include<stdio.h>
void main()
{
	char s[20],ch;
	printf("enter a string\n");
	scanf("%s",s);
	printf("enter a char\n");
	scanf(" %c",&ch);
         printf("before %s\n",s);
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}
		printf("after %s\n",s);
}
