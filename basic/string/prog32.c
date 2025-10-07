#include<stdio.h>
void main()
{
	char s[20];
	int i,j;
	printf("enetr the string\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
		for(j=i;s[j];j++)
		{
			if(s[i]==' ')
		
				s[j]=s[j+1];
				break;
		
		}
	printf("%s",s);
}

