/*) Write a program to delete a desired character in a given string.
     Ex:  Input : embedded
            character: 'd'
             Output : embee
*/
#include<stdio.h>
int main()
{
    char ch[100],s,j=0;
    printf("Enter a string:");
    scanf("%s",ch);
    printf("enter a character to delete:");
    scanf(" %c",&s);
    for(int i=0;ch[i];i++)
    {
        if(ch[i]!=s)
        {
            ch[j++]=ch[i];
        }
    }
    ch[j]='\0';
    printf("%s",ch);
}