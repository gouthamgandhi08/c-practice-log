/*
9)	Write a Program to reverse the Contents of a given file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int last=1;
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("USAGE: ./a.out oldword newword filename\n");
        return 0;
    }

    FILE *fp = fopen(argv[3], "r");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        return 0;
    }

    FILE *fd1 = fopen("temp.txt", "w");
    fseek(fp,0,2);
    int c=ftell(fp);
    for(int i=c;i>0;i--)
    {
        fseek(fp,-last,2);
        c=fgetc(fp);
        fputc(c,fd1);
        last++;
    }
    fclose(fp);
    fclose(fd1); 

    remove(argv[3]);
    rename("temp.txt", argv[3]);

    return 0;
}