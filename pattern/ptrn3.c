/*

      A
     ABC
    ABCDE
   ABCDEFG
  ABCDEFGHI



*/

#include<stdio.h>
int main(){
    int i,k,j,a;
    for(i=5,a=1;i>0;i--,a=a+2)
    {
        for(j=0;j<=i;j++)
        printf(" ");
        for(k=0;k<a;k++)
        {
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}