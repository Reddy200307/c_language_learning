/*

******
13579
****
135
**
1

*/
#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=11,l=1,k=9;k>0;k--,i=i-2,l++){
        for(j=1;j<=i;j=j+2){
            if(l%2==0)
            printf("%d",j);
            else
            printf("*");
        }
        printf("\n");
    }

    // int i,j;
    // for(i=6;i>=0;i--){
    //     for(j=1;j<(i*2)+1;j++){
    //         if(i%2==0 && j%2 == 1)
    //         printf("*");
    //         else{
    //            if (j%2 == 1){
    //             printf("%d",j);
    //            } 
    //         }
    //     }
    //     printf("\n");
    // }
    // int n ;
    // printf("Enter the required number of fibonacci numbers");
    // scanf("%d",&n);
    // int array[n];

    // array[0] = 0;
    // array[1] = 1;
    
    // for(int i = 2; i <= n; i++){
    //     array[i] = array[i-1] + array[i-2];
    // }

    // for(int j = 0; j <= n; j++){
    //     printf("%d\n",array[j]);
    // }

    // // dynamic programming - tabulation
    
    return 0;
}