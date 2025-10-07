/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include<stdio.h>
int main(){
    for(int row=0,n=1;row<5;row++,n++)
    {
        for(int col=0,count=4,j=n;col<=row;col++,count--){
            if(col==0)
            printf("%d ",j);
            else
            {
                j+=count+1;
                printf("%d ",j);

            }
        }
        printf("\n");

    }
    return 0;
}