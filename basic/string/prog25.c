#include<stdio.h>
void main()
{
    char s[20];
    int i,j,len;
    printf("enter the string\n");
    scanf("%[^\n]",s);
    for(len=0;s[len];len++);
    for(i=len-1;i>=0 && s[i]!=' '; i--);
    for(j=i+1; s[j]; j++)
        printf("%c", s[j]);
    printf("\n");
}

