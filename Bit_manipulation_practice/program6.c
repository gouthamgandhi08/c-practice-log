/*
6. WAP to find the given number is divisble by 8 or not using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num & 7)
    printf("%d is not divisible by 8",num);
    else
    printf("%d is divisible by 8",num);

}