#include<stdio.h>
void main()
{
	int a[10]={-11,11,12,-12,9,8,-3,10,22},i,c=0,c1=0,c2=0,c3=0,ele;
ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
	{
		if(a[i]>0)
                {
			c++;
		}
		else
			c1++;
	}
	printf("+ve=%d  -ve=%d\n",c,c1);
	for(i=0;i<ele-1;i++) {
		if( (a[i]>0) &&a[i]%2==0){
			c2++;
		}
		else if((a[i]>0)&&(a[i]%2!=0))
			c3++;
}
		printf("even=%d odd=%d\n",c2,c3);
	
}
