#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    printf("row =%d col=%d \n",row,col);
    int *p=(int *)&arr[0];
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            printf("%d ",(*p+i));
        }
        printf("\n");
    }
    return 0;
}