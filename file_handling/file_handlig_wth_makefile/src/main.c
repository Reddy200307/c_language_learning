#include "header.h"
int main()
{
        int ch;
        char fileName[20], buffer[30];
        printf("Enter the file name to perform operation:- ");
        scanf("%19s", fileName);
        FILE *fp = 0;
        fp = fopen(fileName, "a+");
        if (fp != NULL)
        {
                printf("\033[32mFile opened Successfully\n\033[0m");
        }
        else
        {
                perror("Failed to read file\n");
                exit(1);
        }

        while (1)
        {
                printf("Enter the choice\n");
                printf("1)View File Data\n2)Add Data To File\n3)Delete File\n4)quit\n");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                        Viewfiledata(fp);
                        break;
                case 2:
                        printf("Enter what line u must add to the file\n");
                        scanf(" %29[^\n]", buffer);
                        if (AddData2File(fp, buffer) == success)
                        {
                                printf("\033[32mWritten to the file Successfully \033[0m\n");
                        }
                        else
                                perror("Error Writing to the file");
                        break;
                case 3:
                        printf("Deleting %s \n", fileName);
                        fclose(fp);
                        fp = NULL;
                        if (remove(fileName) == success)
                        {
                                printf("\033[32mRemoved file\033[0m\n");
                                printf("Enter the file name to perform operation:- ");
                                scanf("%19s", fileName);
                                fp = fopen(fileName, "a+");
                                if (fp != NULL)
                                {
                                        printf("\033[32mFile opened Successfully\n\033[0m");
                                }
                                else
                                {
                                        perror("Failed to read file\n");
                                        exit(1);
                                }
                        }
                        else
                        {
                                perror("Failed to delete File");
                                fp = fopen(fileName, "a+");
                                if (fp == NULL)
                                {
                                        printf("Critical Error: Lost access to file.\n");
                                        exit(1);
                                }
                        }
                        break;
                case 4:
                        if (!fclose(fp))
                        {
                                printf("\033[32mFile closed successfully\n");
                        }
                        else
                                perror("Error closing file");
                        exit(0);
                        break;

                default:
                        printf("\033[31mWrong choice entered\n");
                        break;
                }
        }
        return 0;
}