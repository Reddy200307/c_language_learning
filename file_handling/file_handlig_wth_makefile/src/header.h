#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum STATUS
{
        success,
        failure
};
extern int Viewfiledata(FILE *);
extern int AddData2File(FILE *, char *);
#endif