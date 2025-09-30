/*
3)	Write a Program to replace a Specified line in a given file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 1024
int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        printf("USAGE: ./a.out line_no file_name\n");
        return 0;
    }
    FILE *fp =fopen(argv[2],"r");
    if(fp==NULL)
    {
        printf("file doesn't exists\n");
        return 0;
    }
    FILE *fd=fopen("temp.txt","w");
    char s[size];
    int l=0,k=atoi(argv[1]);
    while(fgets(s,size,fp)!=NULL)
    {
        l++;
        if(l==k)
        {
            char str[size];
            printf("enter the sentence to replace");
            scanf("%s",str);
            fputs(str,fd);
        }
        else
         fputs(s,fd);
    }
    fclose(fp);
    fclose(fd);
    remove(argv[2]);
    rename("temp.txt",argv[2]);
}