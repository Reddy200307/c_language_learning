#include<stdio.h>
void main()
{
	int i,j=0,len;
	char s1[10]="123";
	char s2[10]="ABC";
	char s3[20];
for(len=0;s1[len];len++);
	for(i=0;i<len;i++)
	{
		s3[j++]=s1[i];
		s3[j++]=s2[i];
	}
s3[j]='\0';
		printf("%s ",s3);
}
        
