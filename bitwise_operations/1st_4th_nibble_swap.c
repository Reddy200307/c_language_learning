/*
Write a c program to swap the 1st nibble and 4th nibble in a byte
and print the binary 
Enter a number 729
Before swap
The binary of 729 is :- 
0000 0000 0000 0000 0000 0010 1101 1001 
After toggle 
The binary of 37584 is :- 
0000 0000 0000 0000 1001 0010 1101 0000 


*/

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
int main(){
    int num,a,b;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("Before swap\n");
    binary_print(num);
    for(int i=15,j=3;j>=0;i--,j--){
        a=num>>i&1;
        b=num>>j&1;
         if (a != b) {
        num ^= (1 << i);
        num ^= (1 << j);
    }
    }
    printf("After toggle \n");
    binary_print(num);
    return 0;
}