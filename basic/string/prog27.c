#include<stdio.h>
void main()
{
	char s[20],i,j,k,t;
	printf("enter a string\n");
	scanf("%[^\n]",s);
	for(i=0;s[i]!=' '&&s[i]!='\0';i++);
	for(j=0,k=i-1;j<k;j++,k--)
	{
		t=s[j];
		s[j]=s[k];
		s[k]=t;
	}
	printf("%s\n",s);
}
