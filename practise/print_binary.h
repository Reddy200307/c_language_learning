#include<stdio.h>
void print_binary(int num){
    for(int i=31,count=0;i>=0;i--)
    {
        if(count ==3){
            printf("%d ",num>>i&1);
            count=0;
        }
        else{
            printf("%d",num>>i&1);
            count++;
        }
    }
    printf("\n");
}
void print_binary_char(unsigned char num){
    for(int i=7,count=0;i>=0;i--)
    {
        if(count ==3){
            printf("%d ",num>>i&1);
            count=0;
        }
        else{
            printf("%d",num>>i&1);
            count++;
        }
    }
    printf("\n");
}