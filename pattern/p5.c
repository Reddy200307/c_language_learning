/*
A
A*
A*C
A*C*
A*C*E
*/
#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            if(j%2==1)
            printf("* ");
            else
            printf("%c ",'A'+j);

        }
        printf("\n");
    }
    return 0;
}