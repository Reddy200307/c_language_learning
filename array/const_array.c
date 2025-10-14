#include<stdio.h>
int main(){
	 int arr[]={1,2,3,4,5};
	int * ptr=arr;
	printf("Enter the array element :- \n");
	scanf("%d",&ptr[1]);
	printf("%d \n",*(ptr+1));
	return 0;
}
