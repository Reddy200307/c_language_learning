#include<stdio.h>
#include<string.h>
void main()
{
	char s[20]="Aa1Bb2Cc3";
	int i,j,ele,t;
ele=strlen(s);	

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}

}	
	printf("%s",s);
printf("\n");
}

