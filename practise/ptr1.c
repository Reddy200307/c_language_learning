#include <stdio.h>
#include <string.h>
#include "./print_binary.h"

int main()
{
int a=148;
char *p=(char*)&a;
printf("%d\n",*p);
}

