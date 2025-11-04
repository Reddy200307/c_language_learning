#include<stdio.h>
int * abc(){
    int i=10;
    int *j=&i;
    return j;
}
int hello(){
    int a=40;
    printf("%p\n",&a);
}
int main(){
    int * dangling_ptr=abc();
    hello();
         printf("The ptr value is before %d \n",*dangling_ptr);
    dangling_ptr+=2;
     printf("The ptr value after is %d \n",*dangling_ptr);

    return 0;
}