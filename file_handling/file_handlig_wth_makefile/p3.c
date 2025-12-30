#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv){
FILE *fp;
char ch[20];
fp=fopen(argv[1],"a+");
if(fp!=NULL)
printf("\033[32mFiled opened Successfully\033[0m \n");
else{
printf("\033[31mFailed to open File\033[0m\n");
printf("Check the file name once\n");
system("ls");
return 1;
}

printf("Enter the  any sentence or data :-   ");
scanf("%[^\n]",ch);
int i=0;
while(ch[i]){
if((fputc(ch[i],fp))==EOF){
printf("Error Occured while writing to file\n");
}
i++;
}
fputc('\n',fp);
printf("\033[32mWrote to File succesfully\033[0m\n");


if(!(fclose(fp))){
printf("\033[32mFiled closed Successfully\033[0m \n");
}
else{
printf("\033[31mFailed to Close File\033[0m\n");
exit(1);
}
return 0;
}
