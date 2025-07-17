/*
11. Write a program to swap the adjucent bytes of  a given 4-digit hexadecimal
      number.
      Ex : 
      given number  = 0x1234;
      after swap        = 0x3412;

*/
#include<stdio.h>
int main()
{
    unsigned short num,swap;
    printf("Enter 4 digit hexadecimal number:0x");
    scanf("%hx",&num);
    swap=(num<<8)|(num>>8);
    printf("after swap:0x%x",swap);
}