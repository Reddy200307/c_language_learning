#include<stdio.h>
int swap_nib(int);
void main()
{
int i,a[5]={0x12346789,0x11223345,0x99887765,0x99883346,0x33440987};
	for(i=0;i<5;i++)
{
	//int num=0x12345678;
	int n,num=a[i];
	n=swap_nib(num);
	a[i]=n;
}
}
int swap_nib(int num)
{
	int r1,r2,r3;
r1=(0x0000000f&num)<<4;
r2=(num&0x000000f0)>>4;
r3=num&0xffffff00;
num=r1|r2|r3;
	printf("%x ",num);
return num;
}



