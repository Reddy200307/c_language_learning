#include<stdio.h>
#include<string.h>
void main()
{
	char m[]="abc45 78abc",s[]="abc";
	int i,j,c=0,k;
	int len=strlen(s);
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
			{			
				for(k=i;m[k];k++)
				{
					m[k]=m[k+len];
				}
				i--;
			}
		}
	}
	printf("after delete : %s\n",m);
}
