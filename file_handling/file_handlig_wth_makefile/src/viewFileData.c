#include "header.h"
int Viewfiledata(FILE *fp)
{
        char ch;
        rewind(fp);
        while ((ch = fgetc(fp)) != EOF)
        {
                printf("%c", ch);
        }
        return success;
}