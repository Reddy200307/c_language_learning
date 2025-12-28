#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct SingleLinkedList{
int data;
struct SingleLinkedList *ptr;
}Sll;
Sll *head=0;
Sll*NavPtr=0;
void CreateNode(int data){
        Sll * ExtraPtr=0;
        if(head==NULL){
                printf("Empty Node Creating Node....\n");
                head=(Sll*)malloc(sizeof(Sll));
                NavPtr=head;
                NavPtr->data=data;
                NavPtr->ptr=NULL;
        }
        else{
                ExtraPtr=(Sll*)malloc(sizeof(Sll));
                NavPtr->ptr=ExtraPtr;
                ExtraPtr->data=data;
                ExtraPtr->ptr=NULL;
                NavPtr=NavPtr->ptr;         
                
        }
}
void printData(){
        Sll *ptr=head;
        if(ptr==NULL){
                printf("Node Empty\n");
                exit(1);
        }
        while(ptr!=NULL){
                printf("%d\n",ptr->data);
                ptr=ptr->ptr;
        }

}
int main(){
        CreateNode(1);
        CreateNode(3);
        CreateNode(4);
        CreateNode(5);
        printf("The data is\n");
        printData();
        Sll *temp;
        while(head != NULL) {
            temp = head;       // Save the current node
            head = head->ptr;  // Move head to next (save the address!)
            free(temp);        // Safe to delete the old one now
        }
        printf("Memory cleaned up.\n");
        return 0;
}