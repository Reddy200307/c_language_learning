#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,c=0,k;
	printf("enter the string\n");
	scanf("%[^\n]",s);

for(k=0;s[k];k++);	
for(i=0;i<k;i++)
	{
			if(c<3)
			{
				c++;

				for(j=i;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
	}
printf("%s\n",s);
}
