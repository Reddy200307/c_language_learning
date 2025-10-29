/*
Write a c program to add a given number into n th index in an array
This is the array 1 2 3 4 5 6 0 0 0 0 
Enter the number to add into array and index 23 5
This is after array 1 2 3 4 23 5 6 0 0 0 


*/
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6},len=sizeof(arr)/sizeof(arr[0]);
    int num,index;
    printf("This is the array ");
    for(int i =0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("Enter the number to add into array and index ");
    scanf("%d %d",&num,&index);
    for(int i=len-1;i>index-1;i--){
        arr[i]=arr[i-1];
    }
    arr[index-1]=num;
        printf("This is after array ");
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");

    return 0;
}