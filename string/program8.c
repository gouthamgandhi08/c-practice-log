/*Write a program to find the no.of words are presented in a given string line.
     Note: User has to input the string line at runtime
*/
#include<stdio.h>
int main()
{
    char str[100],w=0,c;
    printf("enter a sentence:");
    scanf("%[^\n]s",str);//vector india chennai
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
          c++;
          continue;
        }
        if(c>0)
         {
            c=0;
            w++;
        }
    }
    //word_count++;
    printf("Total words:%d",w);
}