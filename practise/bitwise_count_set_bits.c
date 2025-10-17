/*
Input: n = 13 (binary 1101) → Output: Number of 1s = 3

*/
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number to count ");
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        if(num>>i&1)
        count++;
        if(count>1)
        break;
    }
    if(count==1)
    printf("The number  %d is power of 2 \n",num);
    else
    printf("The  number is not a power of 2 \n ");
    return 0;
}