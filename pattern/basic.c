#include<stdio.h>
int call(int a ,int b );
int main(){
    int a =10,b=20,c,d;
    c,d=call(a,b);
    printf("c= %d , d= %d ",c,d);
    return 0;
}
int call(int a,int b){
return a+b,a-b;
}
