/*Write a program to remove the conjucutive spaces in a given string line.
       Ex: Input:  Vector        India      Pvt     Ltd
             Output: Vector India Pvt Ltd;
*/
#include<stdio.h>
int main()
{
    char s[100],j=0,sp=0;
    printf("enter a sentence:");
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            sp++;
            continue;
        }
        if(sp>0)
        {
            sp=0;
            s[j++]=' ';
        }
        s[j++]=s[i];
    }   
    s[j]='\0';
    printf("%s",s);
}