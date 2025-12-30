#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv){
FILE *fp;
char ch[10];
fp=fopen(argv[1],"r");
if(fp!=NULL)
printf("\033[32mFiled opened Successfully\033[0m \n");
else{
printf("\033[31mFailed to open File\033[0m\n");
return 1;
}
printf("The data in the file is \n");
fread(ch,9,fp);
printf("fread data %s",ch);
fclose(fp);
return 0;
}
