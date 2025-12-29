#include<stdio.h>
#include<stdlib.h>
typedef struct DoubleLinkedList{
struct DoubleLinkedList *prev;
int data;
struct DoubleLinkedList *next;
}DLL;
DLL * head=NULL;
DLL * NavPtr=NULL;
DLL * CenterNode=NULL;
int nodeCount=0;
void countIncremeent(){
        nodeCount++;
}
void countDecrement(){
        nodeCount--;
}
void createNode(int data){
        DLL *temp=NULL;
        if(head==NULL){
                printf("List is empty creating root node\n");
                head=(DLL*)malloc(sizeof(DLL));
                head->next=NULL;
                head->prev=NULL;
                head->data=data; 
                NavPtr=head;       
        }
        else{
                temp=(DLL*)malloc(sizeof(DLL));
                temp->data=data;
                temp->next=NULL;
                temp->prev=NavPtr;
                NavPtr->next=temp;
                NavPtr=temp;
        }

}
void viewData(){
        DLL *temp=head;
        if(head==NULL){
                printf("Nodes are empty\n");
                return;
        }
        printf("Printing the data\n");
        while(temp!=NULL){
                printf("%d ",temp->data);
                temp=temp->next;
        }
        printf("\n");

}
void InsertNode(int target, int data)
{
    DLL *temp = head, *varptr = NULL;

    if (head == NULL) {
        printf("The Nodes are empty first create a root node\n");
        return;
    }

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Target Not found\n");
        return;
    }

    varptr = (DLL *)malloc(sizeof(DLL));
    varptr->data = data;
    varptr->prev = temp;
    varptr->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = varptr;
    }

    temp->next = varptr;
    if (temp == NavPtr) {
        NavPtr = varptr;
    }
}
int main(){
        createNode(1);
        createNode(2);
        createNode(3);
        InsertNode(3,3);
        createNode(4);
        createNode(5);
        viewData();
        DLL* temp=head;
        while(temp!=NULL){
                head=head->next;
                free(temp);
                temp=head;
        }
        printf("Cleared memory\n");        
        return 0;
}