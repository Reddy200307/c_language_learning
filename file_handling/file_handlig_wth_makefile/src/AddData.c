#include "header.h"
int AddData2File(FILE *fp, char *ptr)
{
        if ((fprintf(fp, ptr)) != EOF)
        {
                fputc('\n', fp);
                return success;
        }
        else
                return failure;
}