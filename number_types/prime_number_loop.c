/*
Write a program to find the prime numbers between 1 to 50
op:-2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

*/
#include<stdio.h>
int main(){
    int num,n,i,count=0;
    for(num=1;num<=100;num++){
    for(i=1,count=0;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count==2)
    printf("%d ",num);
}
printf("\n");
    return 0;
}