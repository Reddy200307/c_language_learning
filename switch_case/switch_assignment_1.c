#include<stdio.h>
void Armstrong();
void Strong_number();
void Perfect_number();
void palindrome_number();
void Prime_Number();
int main(){
	int num;
	printf("The operations are \n 1)Armstrong \n 2)Strong Number \n 3) Perfect Number \n 4) Palindrome Number 5) Prime Number \n");
	printf("Enter the choice of operation to perform :- ");
	scanf("%d",&num);
	switch(num){
		case 1: Armstrong();
			break;
		case 2: Strong_number();
			break;
		case 3: Perfect_number();
			break;
		case 4: palindrome_number();
			break;
		case 5: Prime_Number();
			break;
		Default:-printf("Wrong Choice Entered \n");
	}
	return 0;
}
void Armstrong(){
	int num,i,j,sum=0,pow=1,n,temp,count=0;
	printf("Enter a number to check armstrong or not ");
	scanf("%d",&num);
	for(temp=num;temp;temp/=10,count++);
	for(sum=0,temp=num;temp;temp=temp/10){
			n=temp%10;
				for(pow=1,i=1;i<=count;i++){
					pow=n*pow;
				} 
				sum=sum+pow;
			}
			if(num==sum)
			printf("The num %d is armstrong \n",sum);
			else
			printf("The number is not armstrong \n");
	
	}

void Strong_number(){
	    int num,i,prod=1,n,sum=0,temp;
    printf("Enter the number to check strong or not  :- ");
    scanf("%d",&num);
    for(temp=num,sum=0;temp;temp/=10){
        n=temp%10;
        for(i=1,prod=1;i<=n;i++){
            prod*=i;
        }
        sum=sum+prod;
    }
    if(sum==num)
    printf("The number %d is strong number \n",sum);
    else
    printf("The number is not strong number \n");
}
void Perfect_number(){
	    int num,sum=0,i,j;
    printf("Enter the number to find perfect or not :-");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num)
    printf("The number is %d and its perfect number \n",num,sum);
    else
    printf("The number is not a perfect number \n");
}
void palindrome_number(){
	    int num, reversed = 0, remainder, original;
    printf("Enter an integer to find palindrome or not : ");
    scanf("%d", &num);
	original = num; 
	while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
}
void Prime_Number(){
	   int i, num, n, count;
   printf("Enter the range to find prime number: ");
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