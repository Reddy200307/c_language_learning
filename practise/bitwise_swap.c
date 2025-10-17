/*
Input: a = 5, b = 10
Output: After swapping: a = 10, b = 5
*/
#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("enter the a and b :- ");
    scanf("%d %d",&a,&b);
    printf("before a=%d b=%d \n",a,b);
    a^=b^=a^=b;
    printf("after a=%d b=%d \n",a,b);
    return 0;
}