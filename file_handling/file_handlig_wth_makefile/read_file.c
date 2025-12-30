#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv){
FILE *fp;
char ch;
fp=fopen(argv[1],"r");
if(fp!=NULL)
printf("\033[32mFiled opened Successfully\033[0m \n");
else{
printf("\033[31mFailed to open File\033[0m\n");
printf("Check the file name once\n");
system("ls");
return 1;
}

while((ch=fgetc(fp))!=EOF){
printf("%c",ch);
}

if(!(fclose(fp))){
printf("\033[32mFiled closed Successfully\033[0m \n");
}
else{
printf("\033[31mFailed to Close File\033[0m\n");
exit(1);
}
return 0;
}
