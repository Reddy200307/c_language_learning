/*
    E
   12
  CDE
 1234
ABCDE
*/
#include<stdio.h>
int main(){
    int i,j,a,k,l;
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        printf(" ");
        for(a=i,k=1;a<5;a++,k++){
            if(i%2==0)
            printf("%c",'A'+a);
            else
            {
                printf("%d",k);
            }
            
        }
        printf("\n");
    }
    return 0;
}