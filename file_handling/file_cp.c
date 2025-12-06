#include<stdio.h>
int main(int argc,char ** argv){
        char ch;
        FILE *source =fopen(argv[1],"r");
        FILE *destn;
        if(!source){
                printf("File is not present \n");
                return 1;
        }
        destn =fopen(argv[2],"w");
        ch=fgetc(source);
        while (ch!=EOF){
                fputc(ch,destn);
                ch=fgetc(source);
        }
        fclose(source);
        fclose(destn);

        return 0;
}