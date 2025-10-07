#include<stdio.h>
void main()
{
char s[20];
int i,j,c;
printf("enter the string\n");
scanf("%s",s);
for(j=0;s[j];j++);

for(i=2,c=0;i<j;i++)
if(j%i==0)
break;
if(i==j)
printf("yes %d is prime number\n",j);
else
printf("%d is not prime number\n"),j;
}
