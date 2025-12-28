#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct hello
{
        char name[20];
        int rollNo;
        int dob;
}structure;

int main(){
        structure *ptr=(structure*)malloc(sizeof(structure));
        ptr->rollNo=10203;
        ptr->dob=2003;
        strcpy(ptr->name,"hello");
        printf("The details of the struct is\n");
        printf("Name:- %s\n",ptr->name);
        printf("Roll No:-%d\n",ptr->rollNo);
        printf("dob:-%d\n",ptr->dob);
        free(ptr);
        ptr=0;
        return 0;
}