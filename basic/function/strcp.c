#include<stdio.h>

void strcmp1(char *,char *,int);
void main()
{
int n;
char str1[100],str2[100];
printf("Enter the two strings\n");
scanf("%s %d",str1,&n);
printf("before: str1=%s str2=%s n=%d\n",str1,str2,n);


strcmp1(str1,str2,n);


}

void strcmp1(char *s1,char *s2,int n)
{
int i,j;

for(i=0; s1[i] && (n);i++,--n)
{
s2[i]=s1[i];
}

printf("after: str1=%s str2=%s\n",s1,s2);


}

