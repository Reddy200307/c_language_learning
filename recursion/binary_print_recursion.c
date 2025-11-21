#include<stdio.h>
void binary_print(int num,int pos){
    if(pos>=0){
        printf("%d",num>>pos&1);
        binary_print(num,pos-1);
    }
}
int main(){
    int num;
    printf("Enter the number to print binary:- ");
    scanf("%d",&num);
    printf("\n");
    binary_print(num,31);
    printf("\n");
    binary_print(0xEE,7);
    printf("\n");


}