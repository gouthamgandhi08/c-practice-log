/*Write a program to find  string length using pointer.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="hello";
    char *p=s,i=0;
    while(p[i++]!='\0');
    i=i-1;
    printf("length of %s is %d",s,i);
   // printf("length of %s is %d",s,strlen(s));

}