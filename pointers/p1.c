#include<stdio.h>
int main(){
    int a=10,b;
    int *p=&a;
    printf("a = %d a address =%p *p=%d  p=%d *p addree=%p \n",a,&a,*p,p,*p);
    return 0;
}