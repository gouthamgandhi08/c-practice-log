/*Write a program to find count of  Lower characters, Upper characters, Special characters
      and digits occured in a given string.
*/
#include<stdio.h>
int main()
{
    char a[100],lc=0,uc=0,sp=0,d=0;
    printf("enter a string:");
    scanf("%[^\n]s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]>=65)&&(a[i]<=90))
           uc++;
        else if((a[i]>=97)&&(a[i]<=122))
           lc++;
        else if((a[i]>=48)&&(a[i]<=57))
           d++;
        else
           sp++;
    }
    printf("lc=%d,uc=%d,d=%d,sp=%d",lc,uc,d,sp);
}