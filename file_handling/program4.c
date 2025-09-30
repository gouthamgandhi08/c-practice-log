/*
4)	Write a Program to Capitalize First Letter of every Word in a file.
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        printf("USAGE:./a.out file_name\n");
        return 0;
    }
    FILE *fp=fopen(argv[1],"r+");
    if(fp==NULL)
    {
        printf("File doesn't exist\n");
        return 0;
    }
    char ch;
    ch=fgetc(fp);
    if((ch>='a')||(ch<='z'))
    {
        ch=ch^32;
        fseek(fp,-1,1);
        fputc(ch,fp);
    }
    while((ch=fgetc(fp))!=-1)
    {
        if((ch==' ')||(ch=='\n'))
        {
            ch=fgetc(fp);
            if((ch>='a')||(ch<='z'))
                ch=ch^32;
             fseek(fp,-1,1);
             fputc(ch,fp);
        }
    }
    fclose(fp);

}