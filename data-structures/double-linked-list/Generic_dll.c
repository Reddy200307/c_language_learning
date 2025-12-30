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
enum Status
{
        Success,
        Failure
};
void countIncremeent()
{
        nodeCount++;
}
void countDecrement()
{
        nodeCount--;
}
void createNode();
void viewData();
void InsertNode();
void printReverse();
void deleteNode();
void WriteTOFile();
void ReadFromFile();
int main()
{
        int choice = 0;
        while (1)
        {
                printf("Enter the choice\n");
                printf("\033[34m1)Create Node\n2)Insert Node\n3)View Data\n4)Acid test(Print Rev)\n5)Delete Node\n6)Write to File\n7)Load From File\n8)Quit\n\033[0m");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        createNode();
                        break;
                case 2:
                        InsertNode();
                        break;
                case 3:
                        viewData();
                        break;
                case 4:
                        printReverse();
                        break;
                case 5:
                        deleteNode();
                        break;
                case 6:
                        WriteTOFile();
                        break;
                case 7:
                        ReadFromFile();
                        break;
                case 8:
                        DLL *temp = head;
                        while (temp != NULL)
                        {
                                head = head->next;
                                free(temp);
                                temp = head;
                        }
                        printf("\033[32m Cleared memory \033[0m\n");
                        exit(0);
                        break;

                default:
                        printf("\033[31m Wrong choice\n \033[0m");
                        break;
                }
        }
        return 0;
}
void createNode()
{

        DLL *temp = NULL;
        if (head == NULL)
        {
                printf("List is empty creating root node\n");
                head = (DLL *)malloc(sizeof(DLL));
                if (head != NULL)
                {
                        head->next = NULL;
                        head->prev = NULL;
                        printf("Enter the data:-  ");
                        scanf("%d", &head->data);
                        NavPtr = head;
                        printf("\033[32m Node Created Successfully \033[0m\n");
                        countIncremeent();
                }
                else
                        printf("\033[31m Error occured allocating memory \033[0m\n");
        }
        else
        {
                temp = (DLL *)malloc(sizeof(DLL));
                if (temp != NULL)
                {
                        printf("Enter the data:-  ");
                        scanf("%d", &temp->data);
                        temp->next = NULL;
                        temp->prev = NavPtr;
                        NavPtr->next = temp;
                        NavPtr = temp;
                        printf("\033[32m Node Created Successfully \033[0m\n");
                        countIncremeent();
                }
                else
                        printf("\033[31m Error occured allocating memory \033[0m\n");
        }
}
void InsertNode()
{
        DLL *temp = head, *varptr = NULL;

        if (head == NULL)
        {
                printf("\033[31mThe Nodes are empty first create a root node\033[0m\n");
                return;
        }
        int target = 0;
        printf("Enter the target where to add the node:-  ");
        scanf("%d", &target);

        while (temp != NULL && temp->data != target)
        {
                temp = temp->next;
        }

        if (temp == NULL)
        {
                printf("\033[31mTarget Not found\033[0m\n");
                return;
        }
        printf("Enter the data of the node:-");
        int data = 0;
        scanf("%d", &data);

        varptr = (DLL *)malloc(sizeof(DLL));
        if (varptr != NULL)
        {

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
                countIncremeent();
                printf("\033[32m Node Inserted Successfully \033[0m\n");
        }
        else
                printf("\033[31mError Allocating Memory\033[0m\n");
}
void viewData()
{
        DLL *temp = head;
        if (head == NULL)
        {
                printf("\033[31m Nodes are empty \033[0m\n");
                return;
        }
        system("clear");
        printf("Printing the data\n");
        while (temp != NULL)
        {
                printf("%d ", temp->data);
                temp = temp->next;
        }
        printf("\n\n");
}
void printReverse()
{
        DLL *temp = NavPtr; // Start at the END

        if (NavPtr == NULL)
        {
                printf("\033[31mList is empty\033[0m\n");
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
void deleteNode()
{
        DLL *temp = head, *varptr = NULL;
        int target;
        if (head == NULL)
        {
                printf("\033[31mThe Nodes are empty first create a root node\033[0m\n");
                return;
        }
        printf("Enter the target to delete:-  ");
        scanf("%d", &target);
        while (temp != NULL && temp->data != target)
        {
                temp = temp->next;
        }

        if (temp == NULL)
        {
                printf("\033[31mTarget Not found\033[0m\n");
                return;
        }

        if (temp == head)
        {
                printf("\033[31mDeleting Root Node\033[0m\n");
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
                printf("\033[32mDeleted Root Node\033[0m\n");
                countDecrement();
        }
        else if (temp == NavPtr)
        {
                printf("\033[31mDeleting Last Node\033[0m\n");
                varptr = NavPtr;
                NavPtr = NavPtr->prev;
                NavPtr->next = NULL;
                free(varptr);
                printf("\033[32mDeleted Last Node\033[0m\n");
                countDecrement();
        }
        else
        {
                varptr = temp;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(varptr);
                printf("\033[32mDeleted Node\033[0m\n");
                countDecrement();
        }
}
void WriteTOFile()
{
        FILE *fp;
        DLL *temp = head;
        if (head == NULL)
        {
                printf("No Nodes First Create  Node\n");
                return;
        }
        fp = fopen("Hello.csv", "w");
        if (fp != NULL)
                printf("File Opened Successfully\n");
        else
        {
                printf("Failed to Read File\n");
                return;
        }
        if ((temp != NULL) && (temp->next == NULL) && (temp->prev == NULL)) // if its only head node
        {
                fprintf(fp, "%d,", temp->data);
        }
        else
        {
                while ((temp != NULL)) // printing if it is more than one node
                {
                        fprintf(fp, "%d,", temp->data);
                        temp = temp->next;
                }
        }
        printf("Written to file sucessfully\n");
        if (fclose(fp) == Success)
                printf("File Closed Successfully\n");
        else
                printf("Error Closing File\n");
}

void insertFromFile(int data)
{

        DLL *temp = NULL;
        if (head == NULL)
        {
                printf("List is empty creating root node\n");
                head = (DLL *)malloc(sizeof(DLL));
                if (head != NULL)
                {
                        head->next = NULL;
                        head->prev = NULL;
                        head->data = data;
                        NavPtr = head;
                        printf("\033[32m Node Created Successfully \033[0m\n");
                        countIncremeent();
                }
                else
                        printf("\033[31m Error occured allocating memory \033[0m\n");
        }
        else
        {
                temp = (DLL *)malloc(sizeof(DLL));
                if (temp != NULL)
                {
                        temp->data = data;
                        temp->next = NULL;
                        temp->prev = NavPtr;
                        NavPtr->next = temp;
                        NavPtr = temp;
                        printf("\033[32m Node Created Successfully \033[0m\n");
                        countIncremeent();
                }
                else
                        printf("\033[31m Error occured allocating memory \033[0m\n");
        }
}

void ReadFromFile()
{
        FILE *fp;
        // DLL *temp = head;
        fp = fopen("Hello.csv", "r");
        int num = 0;
        if (fp != NULL)
        {
                printf("File read Successfully");
        }
        else
        {
                printf("Error reading file verify if file is presnt\n");
                return;
        }
        while (fscanf(fp, "%d,", &num) == 1)
        {
                insertFromFile(num);
        }
        printf("\n");

        if (fclose(fp) == Success)
                printf("File Closed Successfully\n");
        else
                printf("Error Closing File\n");
}