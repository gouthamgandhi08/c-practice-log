/*
6)      Write a Program to replace the word with the reverse of that word in a given file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 1024
int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        printf("USAGE:./a.out file_name\n");
        return 0;
    }
    FILE *fp=fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("File doesn't exist\n");
        return 0;
    }
    FILE *fd=fopen("temp.txt","w");
    char ch[1024];
    /*while(fscanf(fp,"%s",ch)!=EOF)
    {
        int len=strlen(ch);
        for(int i=0,j=len-1;i<j;i++,j--)
        {
            char temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }
        fprintf(fd,"%s",ch);
        fputc(' ',fd);
    }*/
   while(fgets(ch,size,fp)!=NULL)
   {
        int end=0,j=0;
        for(int i=0;ch[i];i=end)
        {
            end=i;
            if(ch[i]==' ')
            {
                end++;
                continue;
            }
            while((ch[end]!=' ')&&(ch[end]!='\0'))
               end++;   
            for(int k=i,j=end-1;i<j;k++,j--)
             {
                 char temp=ch[k];
                 ch[k]=ch[j];
                 ch[j]=temp;
            }
        }
        fputs(ch,fd);
    }
    
   fclose(fp);
   fclose(fd);
   remove(argv[1]);
   rename("temp.txt",argv[1]);
}