/*
Write a c program to reverse a string
Enter the string to reverse:- hello
Before:- hello 
After:- olleh 
 
*/
#include<stdio.h>
int main(){
    char str[20],t;
    int len=0;
    printf("Enter the string to reverse:- ");
    scanf("%s",str);
    printf("Before:- %s \n",str);
    for(;str[len];len++);
    for(int i=0;i<len/2;i++)
    {
        t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;

    }
    printf("After:- %s \n",str);
    return 0;
}