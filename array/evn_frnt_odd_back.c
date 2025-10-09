/*
Write a c program to swap even numbers in the front and odd numbers in the back of an array

*/
#include<stdio.h>
int main(){
    int arr[]={16,2,3,4,5,6,7,8,9,10,11,12,13,14,15},len=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<len;j++)
    for(int i=0,temp=0;i<len-1;i++)
    {
        if(!(arr[i]%2==0))
            if(arr[i+1]%2==0)
            {

                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;   
            }
        

    }
       printf("\n");
    printf("The array after swap is \n");
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");
}