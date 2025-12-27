#include<stdio.h>
#include<stdlib.h>
int main(){
        int *p;
        p=(int*)malloc(sizeof(int));
        printf("Enter an int :-\t");
        scanf("%d",p);
        printf("The number is %d \n");
        
        return 0;
}