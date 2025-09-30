/*Write a program to reverse the string using loops & using recursion*/
#include<stdio.h>
#include<string.h>
void rev (char *p,int i,int j)
{
    if (i>=j)
    {
        return;
    }
    char ch=p[i];
    p[i]=p[j];
    p[j]=ch;
    rev(p,i+1,j-1);
}
int main()
{
    char s1[20];
    printf("enter a string 1:");
    scanf("%s",s1);
    int len=strlen(s1);
    int i=0,j=len-1;
    rev(s1,i,j);
    printf("%s",s1);
}