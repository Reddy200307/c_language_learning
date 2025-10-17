/*
Input: n = 20
Output: 1 2 4 8 16

*/
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the number range:- ");
    scanf("%d",&num);
    for( i=1;;)
    {
        if(i>num)
        break;
        else
        printf("%d \n",i);
        i=i<<1;

    }

    return 0;
}
