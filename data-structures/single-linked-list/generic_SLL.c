#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int data;
struct Node *ptr;
}Sll;
Sll *head=0;
Sll*NavPtr=0;
int count=0;
void CreateNode();
void InsertNode();
void DeleteNode();
void PrintData();
void countIncrease(){
        count++;
}
void countDecrease(){
        count--;
}
int main(){
        while (1)
        {
        int option=0;
        printf("\033[32m \n1)Create Node\n2)InsertNode\n3)DeleteNode\n4)ViewData\n5)Quit \033[0m\n\n\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:CreateNode();break;
        case 2:InsertNode() ;break;
        case 3:DeleteNode();break;
        case 4:PrintData(); break;
        case 5:Sll *temp;
        while(head != NULL) {
            temp = head;       // Save the current node
            head = head->ptr;  // Move head to next (save the address!)
            free(temp);        // Safe to delete the old one now
        }
        printf("Memory cleaned up.\n");
        exit(0);break;
        
default:
    printf("\033[31;1;5m My Dear Wrong Choice Enter the correct one \033[0m \n");
    break;
        }
        }

        return 0;
}
void CreateNode(){
        int data=0;
        Sll *temp=0;
        if(head==NULL){
                printf("Empty Nodes Creating First One\n");
                head=(Sll*)malloc(sizeof(Sll));
                head->ptr=NULL;
                printf("My Dear Enter the data:- ");
                scanf("%d",&head->data);
                NavPtr=head;
                countIncrease();
        }
        else{   if(NavPtr->ptr!=NULL){
                while(NavPtr->ptr!=NULL){
                        NavPtr=NavPtr->ptr;
                }
                }
                temp=(Sll*)malloc(sizeof(Sll));
                printf("My Dear Enter the data of the Node:- ");
                scanf("%d",&temp->data);
                temp->ptr=NULL;
                NavPtr->ptr=temp;
                NavPtr=NavPtr->ptr;
                countIncrease();
        }

}
void InsertNode(){
        Sll *temp=head,*ptr=NULL;
        int target;
        if(head==NULL)
        {
                printf("MyDear Nodes Are Empty First kindly create the nodes\n");
                return;
        }
        printf("My Dear Enter the target where you need to insert the node if you dont know where to insert first try to view the data:-  ");
        scanf("%d",&target);
        while((temp!=NULL)&&(temp->data!=target)){
                temp=temp->ptr;
        }
        if((temp!=NULL) &&(temp->data ==target) ){
                ptr=(Sll*)malloc(sizeof(Sll));
                ptr->ptr=temp->ptr;
                printf("My Dear Enter the data of the node:-  ");
                scanf("%d",&ptr->data);
                temp->ptr=ptr;
                if(temp == NavPtr) {
            NavPtr = ptr;
        }
        countIncrease();

        }
        else
        printf("My Dear target Not found\n");
}
void DeleteNode(){
        Sll *temp=head,*ptr=NULL;
        int target;
        if(head==NULL)
        {
                printf("MyDear Nodes Are Empty First kindly create the nodes\n");
                return;
        }
        printf("My Dear Enter the target where you need to delete the node if you dont know where to delete first try to view the data:-  ");
        scanf("%d",&target);
        if(temp->data==target && temp!=NULL){
                printf("Trying to delete the Root Node ");
                ptr=head;
                head=head->ptr;
                if(head == NULL) NavPtr = NULL;
                free(ptr);
                countDecrease();
                printf("Root node deleted.\n");
        return;
        }
        else{

                // Check if the NEXT node exists, before checking its data
        while(temp->ptr != NULL && temp->ptr->data != target){
                temp = temp->ptr;
        }
                if(temp->ptr != NULL && temp->ptr->data == target){
                        ptr=temp->ptr;
                        temp->ptr=temp->ptr->ptr;
                        if(ptr == NavPtr) {
            NavPtr = temp; // The "previous" node is now the new tail
        }
                        free(ptr);
                        printf("Node Deleted\n"); 
                        countDecrease();                      
                }
                else
                printf("My Dear target Not found\n");
        }
                

}
void PrintData(){
        Sll*temp=head;
        if(head==NULL){
                printf("The Nodes are empty first create some nodes\n");
                return;
        }
        system("clear");
        printf("Printing the Data\n");
        while(temp!=NULL){
                printf("%d ",temp->data);
                temp=temp->ptr;
        }

}