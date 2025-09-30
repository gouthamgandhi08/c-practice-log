/*Write a one line code to copy the string into another buffer*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="hello",s[20];
    for(int i=0;s[i]=ch[i];i++);
    //strcpy(s,ch);
    printf("%s",s);
}