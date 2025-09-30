/*
5)	Write a Program to meges the lines from two files and store the result into another file.
*/
#include<stdio.h>
#include<stdlib.h>

#define size 1024

int main(int argc,char* argv[])
{
    if(argc!=4)
    {
        printf("USAGE:./a.out src_file_name1 src_file_name2 dst_file_name\n");
        return 0;
    }
    FILE *fp=fopen(argv[1],"r");
    FILE *fd=fopen(argv[2],"r");

    if((fp==NULL)&&(fd==NULL))
    {
        printf("File doesn't exist\n");
        return 0;
    }
    FILE *fs=fopen(argv[3],"w");
    char ch[size],s[size],a,b;
    while(((a=fgets(ch,size,fp))!=NULL)&&((b=fgets(s,size,fd)))!=NULL)
    {
        if((a!=NULL)&&(b!=NULL))
        {
            fputs(ch,fs);
            fputs(s,fs);
        }
    }
    if((a==NULL)&&(b!=NULL))
    {
             while(((b=fgets(s,size,fd)))!=NULL)
                fputs(s,fs);
    }
    if((a!=NULL)&&(b==NULL))
    {
         while((a=fgets(ch,size,fp))!=NULL)
              fputs(ch,fs);
    }
    fclose(fp);
    fclose(fd);
    fclose(fs);


}