/*
Write a c program  to delete the value in a array in nth index 
This is the array 1 2 3 4 5 6 7 8 9 0 
Enter the index to be deleted 3
This is after array 1 2 4 5 6 7 8 9 0 0 


*/
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9},len=sizeof(arr)/sizeof(arr[0]), index;
    printf("This is the array ");
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("Enter the index to be deleted ");
    scanf("%d",&index);
    for(int j=index-1;j<len-1;j++)
    {
        arr[j]=arr[j+1];
        // printf("arr[j]=%d arr[j+1]=%d j=%d \n",arr[j],arr[j+1],j);
    }

    printf("This is after array ");
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");

    return 0;
}