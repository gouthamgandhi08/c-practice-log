/*
7)	Write a Program to copy the one file into multiple destination files which are provided 
	during the loadtime.
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    if(argc<3)
    {
        printf("USAGE:./a.out src_file dst_file");
        return 0;
    }
    FILE *fs=fopen(argv[1],"r");
    if(fs==NULL )
    {
        printf("file doesn't exist\n");
        return 0;
    }
    for(int i=2;i<argc;i++)
    {
        char ch;
        FILE *fd=fopen(argv[i],"w");
        while((ch=fgetc(fs))!=-1)
          fputc(ch,fd);
        rewind(fs);
        fclose(fd);
    }
}