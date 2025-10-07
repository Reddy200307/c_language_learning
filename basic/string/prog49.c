#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ow[20],nw[20],t[100],*p,*q;

	printf("enter a string:\n");
	scanf("%[^\n]",s);

	printf("enter old word:\n");
	scanf("%s",ow);

	printf("enter new word:\n");
	scanf("%s",nw);

	printf("before: %s\n",s);

	p=s;

	q=strstr(p,ow);
	strcpy(t,q+strlen(ow));
	strcpy(q,nw);
	strcat(q,t);

	printf("after: %s\n",s);
}

