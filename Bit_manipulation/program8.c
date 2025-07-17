/*
Convert the characters Upper to Lower and Lower to Upper using bitwise
    operators.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    printf("%c",ch^32);
}