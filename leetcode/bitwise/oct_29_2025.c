/*
You are given a positive number n.
Return the smallest number x greater than or equal to n, such that the binary representation of x contains only set bits
Example 1:
Input: n = 5
Output: 7
Explanation:
The binary representation of 7 is "111".
Example 2:
Input: n = 10
Output: 15
Explanation:
The binary representation of 15 is "1111".
Example 3:
Input: n = 3
Output: 3
Explanation:
The binary representation of 3 is "11"
*/
#include<stdio.h>
int smallestNumber(int n) {
    int num=0,i=0,j=-1;
    for(i=31;i>=0;i--){
        if(n>>i&1){
            break;
        }
    }
    for(j=i;j>=0;j--){
        num=num|(1<<j);
    }
    return num;
    }
int main(){
    int n,num;
    printf("Enter the number :- ");
    scanf("%d",&n);
    num=smallestNumber(n);
    printf("The num of set bits is %d \n",num);
    return 0;
}