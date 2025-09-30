/*Write a program to check the given strings are palindrom or not.
     Note: Palindrome words are words which read and spell the same way both backwards  
               and  forwards. Some examples,  
               madam, level , radar, stats and etc
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    printf("enter a string:");
    scanf("%s",ch);
    int i=0,j=strlen(ch)-1;
    for(;i<j;i++,j--)
    {
        if(ch[i]!=ch[j])
           break;
    }
    if(i>=j)
    printf("palindrome");
    else
    printf("not palindrome");

}