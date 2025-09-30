/*Write a program to convert the characters Upper to Lower and Lower to Upper in a
      given string
*/
#include<stdio.h>
int main()
{
    char ch[100];
    printf("Enter a string");
    scanf("%[^\n]s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
         if(ch[i]!=" ")
           ch[i]=ch[i]^32;
    }
    printf("%s",ch);
}