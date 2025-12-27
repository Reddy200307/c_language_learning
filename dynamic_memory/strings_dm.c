#include<stdio.h>
#include<stdlib.h>
int main(){
        char **p;
        int n;
        printf("Enter the number of strings:-\t");
        scanf("%d",&n);
        p=malloc(sizeof(char *)*n);
        for(int i=0;i<n;i++){
                p[i]=malloc(sizeof(char)*20);
        }
        printf("Enter the names:- \n");
        for(int i=0;i<n;i++){
                scanf("%19s",p[i]);
        }
        printf("The names entered are :-\n");
        for(int i=0;i<n;i++){
                printf("%s\n",p[i]);
        }
        printf("Enter the extra number of names:-\t");
        int j=n;
        scanf("%d",&n);
        n+=j;
        p=realloc(p,sizeof(char *)*n);
        for(int i=j;i<n;i++){
                p[i]=malloc(sizeof(char)*20);
        }
        printf("Enter the new names\n");
        for(int i=j;i<n;i++){
                scanf("%19s",p[i]);

        }
        for(int i=0;i<n;i++){
                printf("%s\n",p[i]);
        }
        //freeing memory
        for(int i=0;i<n;i++){
                free(p[i]);
        }
        free(p);
        p=0;
        return 0;
}