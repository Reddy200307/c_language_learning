#include<stdio.h>
void main()
{
	char m[]="abcd cd 12 cd",s[]="cd";

	int i,j,c=0;

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
				c++;
		}
	}
	if(c>0)
		printf("count = %d\n",c);
}
