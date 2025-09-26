/*

1 2 3 4 *
1 2 3 * 5
1 2 * 4 5
1 * 3 4 5
* 2 3 4 5

*/
#include<stdio.h>
int main(){
    for(int i=0,k=5;i<5;i++,k--){
        for(int j=1;j<=5;j++){
            if(k==j)
            printf("*");
            else
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}