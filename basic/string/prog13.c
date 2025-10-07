#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,c=0,k;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the char\n");
	scanf(" %c",&ch); 
for(k=0;s[k];k++);	
for(i=k-1;i>=0;i--)
	{
		if(s[i]==ch)
			if(c<2)
			{
				c++;

				for(j=i;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
	}
printf("%s\n",s);
}
