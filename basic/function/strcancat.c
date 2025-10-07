#include<stdio.h>

void strcmp1(char *,char *,int);
void main()
{
int n;
char str1[100],str2[100];
printf("Enter the two strings\n");
scanf("%s %s %d",str1,str2,&n);
printf("before: str1=%s str2=%s n=%d\n",str1,str2,n);


strcmp1(str1,str2,n);


}

void strcmp1(char *s1,char *s2,int n)
{
int i,j,k;

for(i=0;s1[i];i++);

for(j=0;s2[j];j++);


for(k=0; (k<j) && (n) ;i++,k++,n--)
{
s1[i]=s2[k];
}
s1[i]=0;
printf("after: str1=%s str2=%s\n",s1,s2);


}

