/*
8) Write a Program to replace the perticular word with another word ( can be any length ) in a given file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{
    if(argc!=4)
    {
        printf("USAGE:./a.out file_name\n");
        return 0;
    }
    FILE *fp=fopen(argv[3],"r");
    if(fp==NULL)
    {
        printf("File doesn't exist\n");
        return 0;
    }
    FILE *fd=fopen("temp.txt","w");
    char ch[1024];
    while(fscanf(fp,"%s",ch)!=EOF)
    {
        if(strcmp(ch,argv[1])==0)
        {
            fprintf(fd,"%s",argv[2]);
            fputc(' ',fd);
        }
        else
            fprintf(fd,"%s",ch);

    }
    fclose(fp);
    fclose(fd);
    remove(argv[3]);
    rename("temp.txt",argv[3]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if (fd1 == NULL)
    {
        printf("Error creating temp file\n");
        fclose(fp);
        return 0;
    }

    char word[1024];
    int c;
    while ((c = fgetc(fp)) != EOF)
    {
        int i = 0;

        // collect one word (until space, tab, newline, or EOF)
        while (c != ' ' && c != '\t' && c != '\n' && c != EOF)
        {
            word[i++] = c;
            c = fgetc(fp);
        }
        word[i] = '\0'; // end the word

        if (i > 0) // if we actually read a word
        {
            if (strcmp(word, argv[1]) == 0)
                fprintf(fd1, "%s", argv[2]);
            else
                fprintf(fd1, "%s", word);
        }

        // write back the delimiter (space, tab, newline) if not EOF
        if (c != EOF)
            fputc(c, fd1);
    }

    fclose(fp);
    fclose(fd1);

    remove(argv[3]);
    rename("temp.txt", argv[3]);

    return 0;
}

*/