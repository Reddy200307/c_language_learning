#include <stdio.h>
#include <string.h>
#include "./print_binary.h"

int main()
{
char *p="Hai Friends",*p1=p;
while(*p!='\0')
++*p++;
printf(" %s %s ",p,p1);
}

