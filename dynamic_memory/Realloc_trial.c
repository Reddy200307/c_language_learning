#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *p,n;
        printf("Enter the number of variables:-\t");
        scanf("%d",&n);
        p=malloc(sizeof(int)*n);
        printf("Enter the %d number of values \n",n);
        for(int i=0;i<n;i++){
                scanf("%d",p+i);
        }
        printf("The values are :-\n");
        for(int i=0;i<n;i++){
                printf("%d ",*(p+i));
        }
        printf("\nEnter the new Size of the block:-\t");
        int j=n;
        scanf("%d",&n);
        p=realloc(p,sizeof(int)*n);
        printf("The values after shrinking are :-\n");
        for(int i=0;i<j;i++){
                printf("%d ",*(p+i));
        }
        printf("\n");
        free(p);
        p=0;

}