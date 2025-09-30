/*Write a program to compare two strings without using strcmp function.*/
#include<stdio.h>
int main()
{
    char s1[20],s2[20],i=0;
    printf("enter the string 1:");
    scanf("%s",s1);
    printf("enter the string 2:");
    scanf("%s",s2);
    for(;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
           break;
    }
    if(s1[i]>s2[i])
     printf("s1 is greater than s2");
    else if(s1[i]<s2[i])
     printf("s2 is greater than s1");
    else 
     printf("s2 is equal to s1");
}