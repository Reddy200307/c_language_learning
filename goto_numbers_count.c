/*
WAP  in C  to sum of even digit , product of odd digit and count total no of digit in given any  int number using goto.

  i/p:    234567    

 o/p:  sum=12   , pod= 105  ,count=6

*/
#include<stdio.h>
int main(){
    int num,sdigit,sum=0,prod=1,count=0;
    printf("Enter the number you want to input :- ");
    scanf("%d",&num);
    if(num==0)
    printf("The number is zero \n ");
    else if(num<0)
    printf("The number is negative number %d \n",num);
    else {
        L1:
        sdigit=num%10;
        num/=10;
        count++;
        if(sdigit%2==0)
        sum+=sdigit;
        else
        prod*=sdigit;
        if(num!=0)
        goto L1;
    }
    printf("The sum of the even numbers is :- %d \n",sum);
    printf("The prod of the odd digits are :- %d \n",prod);
    printf("The number of digits are :-  %d \n",count);
    return 0;
}