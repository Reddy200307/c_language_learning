/*
Write a c program to rotate nth times elements in an array 
Enter the number of times to rotate the array 3
This is the before array 
11 21 31 41 51 61 71 

This is 1 rotate 
71 11 21 31 41 51 61 

This is 2 rotate 
61 71 11 21 31 41 51 

This is 3 rotate 
51 61 71 11 21 31 41 

 
*/
#include<stdio.h>
int main(){
    int a[7]={11,21,31,41,51,61,71},len=sizeof(a)/sizeof(a[0]),t=0;
    int n;
    printf("Enter the number of times to rotate the array ");
    scanf("%d",&n);
    printf("This is the before array \n");
    for(int i=0;i<len;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("\n");
    for(int j=1;j<=n;j++){
        t=a[len-1];
        for(int i=len-1;i>=0;i--){
            a[i]=a[i-1];
        }
        a[0]=t;
        printf("This is %d rotate \n",j);
        for(int i=0;i<len;i++)
        printf("%d ",a[i]);
        printf("\n");
        printf("\n");
    }
    return 0;
}