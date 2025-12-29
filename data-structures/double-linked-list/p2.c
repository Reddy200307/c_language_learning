#include <stdio.h>
#include <stdlib.h>
typedef struct DoubleLinkedList
{
        struct DoubleLinkedList *prev;
        int data;
        struct DoubleLinkedList *next;
} DLL;
DLL *head = NULL;
DLL *NavPtr = NULL;
DLL *CenterNode = NULL;
int nodeCount = 0;
void countIncremeent()
{
        nodeCount++;
}
void countDecrement()
{
        nodeCount--;
}
void createNode(int data)
{
        DLL *temp = NULL;
        if (head == NULL)
        {
                printf("List is empty creating root node\n");
                head = (DLL *)malloc(sizeof(DLL));
                head->next = NULL;
                head->prev = NULL;
                head->data = data;
                NavPtr = head;
        }
        else
        {
                temp = (DLL *)malloc(sizeof(DLL));
                temp->data = data;
                temp->next = NULL;
                temp->prev = NavPtr;
                NavPtr->next = temp;
                NavPtr = temp;
        }
}
void viewData()
{
        DLL *temp = head;
        if (head == NULL)
        {
                printf("Nodes are empty\n");
                return;
        }
        printf("Printing the data\n");
        while (temp != NULL)
        {
                printf("%d ", temp->data);
                temp = temp->next;
        }
        printf("\n");
}
void InsertNode(int target, int data)
{
        DLL *temp = head, *varptr = NULL;

        if (head == NULL)
        {
                printf("The Nodes are empty first create a root node\n");
                return;
        }

        while (temp != NULL && temp->data != target)
        {
                temp = temp->next;
        }

        if (temp == NULL)
        {
                printf("Target Not found\n");
                return;
        }

        varptr = (DLL *)malloc(sizeof(DLL));
        varptr->data = data;
        varptr->prev = temp;
        varptr->next = temp->next;

        if (temp->next != NULL)
        {
                temp->next->prev = varptr;
        }

        temp->next = varptr;
        if (temp == NavPtr)
        {
                NavPtr = varptr;
        }
}
void printReverse()
{
        DLL *temp = NavPtr; // Start at the END

        if (NavPtr == NULL)
        {
                printf("List is empty\n");
                return;
        }

        printf("Printing in Reverse (The Acid Test):\n");
        while (temp != NULL)
        {
                printf("%d ", temp->data);
                temp = temp->prev; // Go BACKWARDS
        }
        printf("\n");
}
void deleteNode(int target)
{
        DLL *temp = head, *varptr = NULL;
        if (head == NULL)
        {
                printf("The Nodes are empty first create a root node\n");
                return;
        }

        while (temp != NULL && temp->data != target)
        {
                temp = temp->next;
        }

        if (temp == NULL)
        {
                printf("Target Not found\n");
                return;
        }

        if (temp == head)
        {
                printf("Deleting Root Node\n");
                varptr = head;
                head = head->next;

                if (head != NULL)
                {
                        head->prev = NULL;
                }
                else
                {
                        NavPtr = NULL;
                }

                free(varptr);
                printf("Deleted Node\n");
        }
        else if (temp == NavPtr)
        {
                printf("Deleting Last Node\n");
                varptr = NavPtr;
                NavPtr = NavPtr->prev;
                NavPtr->next = NULL;
                free(varptr);
                printf("Deleted Node\n");
        }
        else
        {
                varptr = temp;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(varptr);
                printf("Deleted Node\n");
        }
}
int main()
{
        createNode(1);
        createNode(2);
        createNode(3);
        InsertNode(3, 3);
        createNode(4);
        deleteNode(3);
        createNode(5);
        viewData();
        printReverse();
        DLL *temp = head;
        while (temp != NULL)
        {
                head = head->next;
                free(temp);
                temp = head;
        }
        printf("Cleared memory\n");
        return 0;
}