#include<stdio.h>

void strcmp1(char *,char *,int);
void print(int ,int);
void main()
{
int i=10,j=19,n;
char str1[100],str2[100];
printf("Enter the two strings\n");
scanf("%s %s %d",str1,str2,&n);
printf("str1=%s \nstr2=%s\n n=%d\n",str1,str2,n);


strcmp1(str1,str2,n);


print(i,j);
}

void strcmp1(char *s1,char *s2,int n)
{
int i,j;

for(i=0,j=0;(s1[i]&&s2[j]) && (n-1);i++,j++,--n)
{
if(s1[i]!=s2[j])
break;
}
if(s1[i]==s2[j])
printf("Yes both are equal\n");
else
printf("No both are not equal\n");
}

void print(int a,int b)
{
printf("a=%d b=%d\n",a,b);
}
