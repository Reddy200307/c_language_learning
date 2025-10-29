/*
Write a c program to rotate the elements in an array 
This is the before array 11 21 31 41 51 61 71 
This is the after array 71 11 21 31 41 51 61 
*/
#include<stdio.h>
int main(){
    int a[7]={11,21,31,41,51,61,71},len=sizeof(a)/sizeof(a[0]),t=0;
    printf("This is the before array ");
    for(int i=0;i<len;i++)
    printf("%d ",a[i]);
    printf("\n");
    t=a[len-1];
    for(int i=len-1;i>=0;i--){
        a[i]=a[i-1];

    }
    a[0]=t;
    printf("This is the after array ");
    for(int i=0;i<len;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}