/*
a b c d e f
  1 2 3 4 5
    a b c d 
      1 2 3 
        a b 
          1 

*/
#include<stdio.h>
int main(){
    int num,row,i,j,col,space;
    printf("Enter the number of rows:- ");
    scanf("%d",&num);
    for(row=num,i=0;row>=0;row--,i++){
        for(space=0;space<i;space++)
        printf(" ");
        for(col=row,j=0;col>=0;col--,j++)
        {
            if(i%2==0)
            printf("%c",'a'+j);
            else
            printf("%d",j+1);

        }
        printf("\n");
    }

    return 0;
}