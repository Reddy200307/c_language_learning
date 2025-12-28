/*
Challenge:
Ask the user for n (number of students).
Use calloc to create an array of structs.
Loop to input data for each student.
Hint: When accessing an array index like list[i], it becomes a real variable, so you switch back to the Dot (.) operator!
Print them all.
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
    char name[20];
    int rollNo;
} Student;

int main() {
        int n;
        char name[20];
        printf("Enter the number of students:-\t");
        scanf("%d",&n);
        Student *stud=(Student*)calloc(n,sizeof(Student));
        for(int i=0;i<n;i++){
                printf("Enter the Details of Student %d\n",i+1);
                printf("Name:-  ");
                scanf("%19s",(stud+i)->name);
                printf("RollNo:-  ");
                scanf("%d",&(stud+i)->rollNo);
                
        }
        printf("\nThe details of the students are\n");
        for(int i=0;i<n;i++){
                printf("Student %d\n",i+1);
                printf("Name:-  %s\n",(stud+i)->name);
                printf("RollNo:-  %d\n",(stud+i)->rollNo);
                
        }
        free(stud);
        

    
}