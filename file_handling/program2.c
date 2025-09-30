/*
2)	Write a Program to remove a Specific line from the given text file.
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
    if(argc!=3)
    {
        printf("USAGE: ./a.out line_no file_name\n");
        return 0;
    }
    FILE *fp=fopen(argv[2],"r");
    
    if(fp==NULL)
    {
        printf("FILE doesn't exists\n");
        return 0;
    }
    FILE *fd=fopen("1.txt","w");
    char s[1024];
    int l=0 , k=atoi(argv[1]);
    while(fgets(s,1024,fp)!=NULL)
    {
        l++;
        if(l!=k)
        {
           fputs(s,fd);
        }
    }
    fclose(fp);
    fclose(fd);
    remove(argv[2]);
    rename("1.txt",argv[2]);
    
}