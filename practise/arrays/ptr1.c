/*
Write a program to print the binary of a float using integer ptr

Enter the number to find binary :- 3.14
The binary of 3.140000 is 
01000000010010001111010111000011

Enter the number to find binary :- -2.5
The binary of -2.500000 is 
11000000001000000000000000000000


*/
#include<stdio.h>
int main(){
    float f=0;
    printf("Enter the number to find binary :- ");
    scanf("%f",&f);

    unsigned int *pF=(unsigned int *)&f;
    printf("The binary of %f is \n",f);
    for(int i=31;i>=0;i--){
        printf("%d",*pF>>i&1);
    }
    printf("\n");
    return 0;
}