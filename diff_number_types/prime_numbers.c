/*
Prime numbers are positive integers greater than 1 that have no divisors other than 1 and themselves.

OP:-Enter the range:50
The prime numbers in between the range 1 to 50:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/

#include<stdio.h>
void main(){
   int i, num, n, count;
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}