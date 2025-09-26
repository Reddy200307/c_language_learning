/*

    #
   AB
  ###
 ABCD
#####

*/
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=5,k=1;i>0;i--,k++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(int l=0;l<k;l++){
            if(k%2==1){
                printf("#");
            }
            else
            printf("%c",'A'+l);
        }
        printf("\n");
    }
    return 0;
}