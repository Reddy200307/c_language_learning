#include<stdio.h>
void binary_print(int num){
    printf("The binary of %d is :- \n",num);
    for(int i=31,count=0;i>=0;i--)
    {
        if(count==3){
            printf("%d ",num>>i&1);
            count=0;
        }
        else
        {
           printf("%d",num>>i&1);
           count++;
        }
    }
    printf("\n");

}