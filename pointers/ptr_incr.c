#include<stdio.h>
int main(){
    int a=512;
    int *i=&a;
    char *c=(char *)&a;
    printf("The value of the first byte in a is %d and addr= %p \n",*c,c);
    c=c+1;
    printf("After increment with 1 is %d  and addr is %p \n",*c,c);
    c=c+4;
    printf("After increment with 2 is %u  and addr is %p \n",*c,c);
    
    return 0;
}