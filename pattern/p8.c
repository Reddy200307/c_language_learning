/*


5
**
543
****
54321

*/
#include<stdio.h>
int main(){
    int i,k;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<i;k++)
        {
            if(i%2==1)
            printf("%d",5-k);
            else
            printf("*");

        }
        printf("\n");
    }
    return 0;
}