#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct SingleLinkedList{
int data;
struct SingleLinkedList *ptr;
}Sll;
void printData(Sll *head){
        Sll *ptr=head;
        if(ptr==NULL){
                printf("Node Empty");
                exit(1);
        }
        while(ptr!=NULL){
                printf("%d\n",ptr->data);
                ptr=ptr->ptr;
        }

}
int main(){
        Sll *head=(Sll*)malloc(sizeof(Sll));
        head->data=1;
        head->ptr=NULL;
        Sll *_2Ptr=(Sll*)malloc(sizeof(Sll));
        _2Ptr->data=2;
        _2Ptr->ptr=NULL;
        head->ptr=_2Ptr;
        _2Ptr=(Sll*)malloc(sizeof(Sll));
        _2Ptr->data=3;
        _2Ptr->ptr=NULL;
        head->ptr->ptr=_2Ptr;
        printf("The data is \n");
        printData(head);
        Sll *temp;
        while(head != NULL) {
            temp = head;       // Save the current node
            head = head->ptr;  // Move head to next (save the address!)
            free(temp);        // Safe to delete the old one now
        }
        printf("Memory cleaned up.\n");
        return 0;
}