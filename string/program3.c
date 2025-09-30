/*Write a program to find the no.of times the character is found in a given string.*/
#include<stdio.h>
int main()
{
    char s[20],ch,c=0;
    printf("enter a string:");
    scanf("%s",s);
    printf("enter a character:");
    scanf(" %c",&ch);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        c++;
    }
    printf("no of times %c occured in %s is %d",ch,s,c);
    
}