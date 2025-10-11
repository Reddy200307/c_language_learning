#include<stdio.h>
int main(){
	static const int arr[]={1,2,3,4,5};
	int * ptr=arr;
	*(ptr+3)=45;
	printf("%d \n",arr[3]);
	return 0;
}
