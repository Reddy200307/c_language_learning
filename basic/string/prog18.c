#include<stdio.h>
void main()
{
	char s[20], new_string;
	int j,index, len;
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the index\n");
	scanf("%d",&index);
	printf("enter the new string\n");
	scanf(" %c", &new_string);
	for(len=0;s[len]; len++);
	for(j=len;j>=index;j--)
		s[j+1]=s[j];
	s[index]=new_string;
	printf("%s",s);
}
