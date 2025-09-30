/*
    1)	Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file
*/
#include<stdio.h>
int main()
 {
    FILE *fp=fopen("data.txt","r+");
    if(fp==NULL)
    {
         printf("file doesn't exists\n");
         return 0;
    }
        char ch;
        while((ch=fgetc(fp))!=EOF)
        {
            if((ch>='A')&&(ch<='Z'))
             {
                 fseek(fp,-1,SEEK_CUR);
                 ch=ch+32;
                fputc(ch,fp);
             }
             else if((ch>=97)&&(ch<=122))
             {
                 fseek(fp,-1,SEEK_CUR);
                 ch=ch-32;
                 fputc(ch,fp);
              }

            }
            fclose(fp);
 }