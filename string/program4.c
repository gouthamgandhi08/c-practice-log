/*Write a program to find vowels in a given  string*/
#include<stdio.h>
int main()
{
    char s[20],c=0;
    printf("enter the string:");
    scanf("%s",s);
    for(int i=0;s[i];i++)
    {
        if((s[i]=='A')||(s[i]=='a')||(s[i]=='E')||(s[i]=='e')||(s[i]=='I')||(s[i]=='i')||(s[i]=='O')||(s[i]=='o')||(s[i]=='U')||(s[i]=='u'))
        {
        printf("%c",s[i]);
        c++;
        }
    }
    printf("\nTotal vowel in %s is %d",s,c);
}