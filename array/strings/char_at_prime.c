/*
Write a c program to print the char on the prime index of the array/string
*/
#include<stdio.h>
int main(){
    char arr[]="this_is_a_string";
    int len,count,j,i;
    for(len=0;arr[len];len++);
    for(i=0;i<len;i++){
        for(j=1,count=0;j<=i;j++){
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("Char at %d is %c \n",i,arr[i]);
    }
    //or
    printf("This is second method :- \n");
    for(i=0;i<len;i++){
        for(j=2;j<=i;j++)
        if(i%j==0)break;
        if(i==j)
            printf("Char at %d is %c \n",i,arr[i]);
    
    }
}