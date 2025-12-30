#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv){
FILE *fp;
char ch;
fp=fopen(argv[1],"r");
if(fp!=NULL)
printf("\033[32mFiled opened Successfully\033[0m \n");
else
printf("\033[31mFailed to open File\033[0m\n");
printf("The data in the file is \n");
ch=fgetc(fp);
printf("%c",ch);
while(ch!='\n'){
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
return 0;
}
